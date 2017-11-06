#pragma once
/**
* @file IOCollection.h
* @brief Содержит объявление абстрактного класса IOCollection
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "StorageInterface.h"
#include "ICollection.h"
#include "StreamHelperFactory.h"

namespace Stream {
	/**
	* Абстрактного класс, который сохраняет/загружает данные коллекции в файл
	*/
	template<typename Item>
	class IOCollection abstract {
	public:
		/**
		* Деструктор
		*/
		virtual ~IOCollection();

		/**
		* Загрузка данных
		* @param _oStream открытый поток для загрузки данных
		* @param _nameCollection название коллекции
		* @param streamHelper вспомогательный класс для чтения данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		static Collection::ICollection<Item>* Load(std::istream& _oStream, std::string _nameCollection,
			StreamHelper::StreamHelperFactory *streamHelper, Item(*_getObjectFromString)(std::string));

		/**
		* Загрузка данных
		* @param _nameCollection название коллекции
		* @param _path путь к файлу из которого нужно загрузить данные
		* @param streamHelper вспомогательный класс для записи данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		static Collection::ICollection<Item>* Load(std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *streamHelper, Item(*_getObjectFromString)(std::string));

		/**
		* Сохранение данных
		* @param _nameCollection название коллекции
		* @param aStream открытый поток для сохранения данных
		* @param streamHelper вспомогательный класс для записи данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::ostream& aStream, StreamHelper::StreamHelperFactory *oStream);
		/**
		* Сохранение данных
		* @param _nameCollection название коллекции
		* @param _path путь к файлу в которого нужно сохранить данные
		* @param streamHelper вспомогательный класс для записи данных в определенном формате
		* @param _getObjectFromString указатель на функцию, которая будет конвертировать строку в объект
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *oStream);
	};
}