#pragma once
#include "StorageInterface.h"
#include "ICollection.h"
#include "StreamHelperFactory.h"

namespace Stream{
	template<typename Item>
	class IOCollection abstract{
	public:
		/**
		* Деструктор
		*/
		virtual ~IOCollection();

		/**
		* Завантажує дані із потоку
		* @param aStream Відкритий потік для завантаження даних
		*/
		static Collection::ICollection<Item>* Load(std::istream& _oStream,std::string _nameCollection ,
			StreamHelper::StreamHelperFactory *streamHelper, Item (*_getObjectFromString)(std::string));

		/**
		* Завантажує дані із потоку
		*/
		static Collection::ICollection<Item>* Load(std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *streamHelper, Item (*_getObjectFromString)(std::string));

		/**
		* Зберігає дані в потік
		* @param aStream Відкритий потік для збереження даних
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::ostream& aStream, StreamHelper::StreamHelperFactory *oStream);

		/**
		* Зберігає дані в потік
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *oStream);
	};
}