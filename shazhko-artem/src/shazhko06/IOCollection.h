#pragma once
#include "StorageInterface.h"
#include "ICollection.h"
#include "StreamHelperFactory.h"

namespace Stream{

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
		static Collection::ICollection<MStorageInterface*>* Load(std::istream& _oStream,std::string _nameCollection ,
			StreamHelper::StreamHelperFactory *streamHelper, MStorageInterface* (*_getObjectFromString)(std::string));

		/**
		* ��������� ��� �� ������
		*/
		static Collection::ICollection<MStorageInterface*>* Load(std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *streamHelper, MStorageInterface* (*_getObjectFromString)(std::string));

		/**
		* ������ ��� � ����
		* @param aStream ³������� ���� ��� ���������� �����
		*/
		static void Save(Collection::ICollection<MStorageInterface*> *_collection,
			std::string _nameCollection, std::ostream& aStream, StreamHelper::StreamHelperFactory *oStream);

		/**
		* ������ ��� � ����
		*/
		static void Save(Collection::ICollection<MStorageInterface*> *_collection,
			std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *oStream);
	};
}