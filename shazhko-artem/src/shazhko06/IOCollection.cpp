#include "IOCollection.h"
#include "SimpleList.h"
#include <sstream>
#include <fstream>

namespace Stream {
	IOCollection::~IOCollection() {}
	Collection::ICollection<MStorageInterface*>* IOCollection::Load(std::istream& _iStream, std::string _nameCollection, StreamHelper::StreamHelperFactory *streamHelper,
		MStorageInterface* (*_getObjectFromString)(std::string))
	{
		Collection::SimpleList<MStorageInterface*> * result = new Collection::SimpleList<MStorageInterface*>();
		using namespace Stream;
		StreamHelper::InputStreamHelper *iStream = streamHelper->CreateInputStreamHelper(_iStream);
		StreamHelper::StreamHelperArg *data = new StreamHelper::StreamHelperArg();
		bool isFoudEnd = false;
		int size = 0;
		bool isFound = false;

		while (!iStream->isEnd()) {
			data = iStream->Read();
			if (!data)continue;
			if (_nameCollection == data->nameVulue) { // wheelList==wheelList
				isFound = true;
				break;
			}
			if (data)
				delete data;
		}
		if (!isFound)return result; // wheelList!=wheelList
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
				break;
			}
			if (data)
				delete data;
		}
		if (!isFound)return result; // collection!=collection

		std::string text = "";
		MStorageInterface * object = NULL;
		for (int i = 0; i < size; i++)
		{
			object = NULL;
			_iStream >> text;
			if(text!=std::string("{")) throw "Expected symbol \"{\""; data = iStream->Read();
			data = iStream->Read();
			if (!data)continue;
			if (std::string("BEGIN") == data->nameVulue) {	//BEGIN==BEGIN
				object = _getObjectFromString(data->value);
				object->OnLoad(_iStream);
				_iStream >> text;
				if (text != std::string("}") && text != std::string("},")) throw "Expected symbol \"}\"";
				result->Push(object);
			}
		}
		_iStream >> text;
		if (text != std::string("]}")) throw "Expected symbol \"]}\"";
		return result;
	}
	Collection::ICollection<MStorageInterface*>* IOCollection::Load(std::string _nameCollection, std::string _path,
		StreamHelper::StreamHelperFactory *streamHelper,
		MStorageInterface* (*_getObjectFromString)(std::string))
	{
		std::ifstream fileStream;
		fileStream.open(_path, std::ios_base::in | std::ios_base::binary);

		if (!fileStream) {
			throw "Could not open file.";
		}

		return Load(fileStream,_nameCollection, streamHelper, _getObjectFromString);
	}

	void IOCollection::Save(Collection::ICollection<MStorageInterface*>* _collection,
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
	void IOCollection::Save(Collection::ICollection<MStorageInterface*> *_collection,
		std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *streamHelper)
	{
		std::ofstream fileStream;
		fileStream.open(_path.c_str(),
			std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
		if (!fileStream) {
			throw "Could not open file.";
		}
		Save(_collection, _nameCollection, fileStream, streamHelper);
	}
}