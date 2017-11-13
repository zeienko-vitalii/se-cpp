/**
* @file IOCollection.cpp
* @brief Содержит реализацию абстрактного класса IOCollection
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "SimpleStreamHelperFactory.h"
#include "SimpleList.h"
#include <sstream>
#include <fstream>

namespace Stream {
	namespace IOCollection {
		/**
		* Загрузка данных
		* @param _oStream открытый поток для загрузки данных
		* @param _nameCollection название коллекции
		* @param streamHelper вспомогательный класс для чтения данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		template<typename Item>
		Collection::ICollection<Item>* Load(std::istream & _iStream, std::string _nameCollection, StreamHelper::StreamHelperFactory * streamHelper, Item(*_getObjectFromString)(std::string))
		{
			Collection::SimpleList<Item> * result = new Collection::SimpleList<Item>();
			using namespace Stream;
			StreamHelper::InputStreamHelper *iStream = streamHelper->CreateInputStreamHelper(_iStream);
			StreamHelper::StreamHelperArg *data = NULL;
			bool isFoudEnd = false;
			int size = 0;
			bool isFound = false;

			while (!iStream->isEnd()) {
				data = iStream->Read();
				if (!data)continue;
				if (_nameCollection == data->nameVulue) { // wheelList==wheelList
					isFound = true;
				}
				if (data) {
					delete data;
					data = NULL;
				}
				if (isFound)break;
			}
			if (!isFound) {
				delete iStream;
				return result; // wheelList!=wheelList
			}
			isFound = false;
			std::stringstream ss;

			while (!iStream->isEnd()) {
				data = iStream->Read();
				if (!data)continue;
				if (std::string("size") == data->nameVulue) { // wheelList==wheelList
					ss << data->value;
					ss >> size;
				}
				if (std::string("collection") == data->nameVulue) {	//collection==collection
					isFound = true;
				}
				if (data) {
					delete data;
					data = NULL;
				}
				if (isFound)break;
			}
			if (!isFound) {
				delete iStream;
				return result; // collection!=collection
			}
			std::string text = "";
			Item object = NULL;
			for (int i = 0; i < size; i++)
			{
				object = NULL;
				_iStream >> text;
				if (text != std::string("{")) {
					delete iStream;
					iStream = NULL;
					auto it = result->CreateIterator();
					for (it->First(); !it->IsDone(); it->Next())delete it->CurrentItem();
					delete it;
					delete result;
					throw "Expected symbol \"{\"";
				}
				data = iStream->Read();
				if (!data)continue;
				if (std::string("BEGIN") == data->nameVulue) {	//BEGIN==BEGIN
					object = _getObjectFromString(data->value);
					if (object) {
						object->OnLoad(_iStream);
						result->Push(object);
					}
					_iStream >> text;
					if (text != std::string("}") && text != std::string("},")) {
						delete iStream;
						iStream = NULL;
						auto it = result->CreateIterator();
						for (it->First(); !it->IsDone(); it->Next())delete it->CurrentItem();
						delete it;
						delete result;
						delete data;
						data = NULL;
						throw "Expected symbol \"}\"";
					}
				}
				if (data) {
					delete data;
					data = NULL;
				}
			}
			_iStream >> text;
			if (text != std::string("]}")) {
				delete iStream;
				iStream = NULL;
				auto it = result->CreateIterator();
				for (it->First(); !it->IsDone(); it->Next())delete it->CurrentItem();
				delete it;
				delete result;
				throw "Expected symbol \"]}\"";
			}
			delete iStream;
			return result;
		}

		/**
		* Загрузка данных
		* @param _nameCollection название коллекции
		* @param _path путь к файлу из которого нужно загрузить данные
		* @param streamHelper вспомогательный класс для записи данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		template<typename Item>
		Collection::ICollection<Item>* Load(std::string _nameCollection, std::string _path,
			StreamHelper::StreamHelperFactory *streamHelper,
			Item(*_getObjectFromString)(std::string))
		{
			std::ifstream fileStream;
			fileStream.open(_path, std::ios_base::in | std::ios_base::binary);

			if (!fileStream) {
				throw "Could not open file.";
			}
			Collection::ICollection<Item>* result = NULL;;
			try {
				result= Load(fileStream, _nameCollection, streamHelper, _getObjectFromString);
			}
			catch (...) {}
			fileStream.close();
			return result;
		}

		/**
		* Сохранение данных
		* @param _nameCollection название коллекции
		* @param aStream открытый поток для сохранения данных
		* @param streamHelper вспомогательный класс для записи данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		template<typename Item>
		void Save(Collection::ICollection<Item>* _collection,
			std::string _nameCollection, std::ostream & aStream, StreamHelper::StreamHelperFactory *streamHelper)
		{
			if (!_collection) return;
			using namespace Stream;
			StreamHelper::OutputStreamHelper *oStream = streamHelper->CreateOutputStreamHelper(aStream);
			StreamHelper::StreamHelperArg *data = new StreamHelper::StreamHelperArg();
			std::stringstream ss;

			data->nameVulue = _nameCollection;
			data->value = "{";
			oStream->Write(data);

			data->nameVulue = "size";
			ss << _collection->Count();
			ss >> data->value;
			oStream->Write(data);

			data->nameVulue = "collection";
			data->value = "[";
			oStream->Write(data);

			auto it = _collection->CreateIterator();
			int posInCollection = 0;
			for (it->First(); !it->IsDone(); it->Next())
			{
				aStream << "{\n";
				it->CurrentItem()->OnStore(aStream);
				posInCollection++;
				if (posInCollection == _collection->Count())
					aStream << "}\n";
				else
					aStream << "},\n";
			}

			aStream << "]}\n";
			delete it;
			delete oStream;
			delete data;
		}

		/**
		* Сохранение данных
		* @param _nameCollection название коллекции
		* @param _path путь к файлу в которого нужно сохранить данные
		* @param streamHelper вспомогательный класс для записи данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		template<typename Item>
		void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *streamHelper)
		{
			std::ofstream fileStream;
			fileStream.open(_path.c_str(),
				std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
			if (!fileStream) {
				throw "Could not open file.";
			}
			try {
				Save(_collection, _nameCollection, fileStream, streamHelper);
			}
			catch (...) {}
			fileStream.close();
		}
	}
}