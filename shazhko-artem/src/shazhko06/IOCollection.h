#pragma once
/**
* @file IOCollection.h
* @brief �������� ���������� ������������ ������ IOCollection
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "StorageInterface.h"
#include "ICollection.h"
#include "StreamHelperFactory.h"

namespace Stream{
	/**
	* ������������ �����, ������� ���������/��������� ������ ��������� � ����
	*/
	template<typename Item>
	class IOCollection abstract{
	public:
		/**
		* ����������
		*/
		virtual ~IOCollection();

		/**
		* �������� ������
		* @param _oStream �������� ����� ��� �������� ������
		* @param _nameCollection �������� ���������
		* @param streamHelper ��������������� ����� ��� ������ ������ � ������������ �������
		* @param _getObjectFromString ��������� �� �������, ������� ����� �������������� ������ � ������
		*/
		static Collection::ICollection<Item>* Load(std::istream& _oStream,std::string _nameCollection ,
			StreamHelper::StreamHelperFactory *streamHelper, Item (*_getObjectFromString)(std::string));

		/**
		* �������� ������
		* @param _nameCollection �������� ���������
		* @param _path ���� � ����� �� �������� ����� ��������� ������
		* @param streamHelper ��������������� ����� ��� ������ ������ � ������������ �������
		* @param _getObjectFromString ��������� �� �������, ������� ����� �������������� ������ � ������
		*/
		static Collection::ICollection<Item>* Load(std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *streamHelper, Item (*_getObjectFromString)(std::string));

		/**
		* ���������� ������
		* @param _nameCollection �������� ���������
		* @param aStream �������� ����� ��� ���������� ������
		* @param streamHelper ��������������� ����� ��� ������ ������ � ������������ �������
		* @param _getObjectFromString ��������� �� �������, ������� ����� �������������� ������ � ������
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::ostream& aStream, StreamHelper::StreamHelperFactory *oStream);
		/**
		* ���������� ������
		* @param _nameCollection �������� ���������
		* @param _path ���� � ����� � �������� ����� ��������� ������
		* @param streamHelper ��������������� ����� ��� ������ ������ � ������������ �������
		* @param _getObjectFromString ��������� �� �������, ������� ����� �������������� ������ � ������
		*/
		static void Save(Collection::ICollection<Item> *_collection,
			std::string _nameCollection, std::string _path, StreamHelper::StreamHelperFactory *oStream);
	};
}