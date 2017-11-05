#pragma once
#include "StorageInterface.h"
#include "ICollection.h"
#include "StreamHelperFactory.h"

namespace Stream{
	template<typename Item>
	class IOCollection abstract{
	public:
		/**
		* ����������
		*/
		virtual ~IOCollection();

		/**
		* ��������� ��� �� ������
		* @param aStream ³������� ���� ��� ������������ �����
		*/
		static Collection::ICollection<Item>* Load(std::istream& _oStream,std::string _nameCollection ,
			StreamHelper::StreamHelperFactory *streamHelper, Item (*_getObjectFromString)(std::string));

		/**
		* ��������� ��� �� ������
		*/
		static Collection::ICollection<Item>* Load(std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *streamHelper, Item (*_getObjectFromString)(std::string));

		/**
		* ������ ��� � ����
		* @param aStream ³������� ���� ��� ���������� �����
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::ostream& aStream, StreamHelper::StreamHelperFactory *oStream);

		/**
		* ������ ��� � ����
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *oStream);
	};
}