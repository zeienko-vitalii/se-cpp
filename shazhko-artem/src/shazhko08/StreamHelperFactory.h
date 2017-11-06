#pragma once
/**
* @file StreamHelperFactory.h
* @brief �������� ���������� ������������ ������ StreamHelperFactory
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include "InputStreamHelper.h"
#include "OutputStreamHelper.h"
#include <iostream>

namespace Stream {
	namespace StreamHelper {

		/**
		* ������������ �����, ������� ������ ��������� ����������� ������� ��� �������� ��������������� �������� �����-������
		*/
		class StreamHelperFactory abstract {
		public:
			/**
			* ����������
			*/
			virtual ~StreamHelperFactory() {}
			/**
			* ����������� �������, ������� ������ ��� ������ ���������� �� ������
			* @return ������, ������� ��������� ��������� InputStreamHelper, ��� ������ ���������� �� ������
			*/
			virtual InputStreamHelper* CreateInputStreamHelper(std::istream &iStream) = 0;
			/**
			* ����������� �������, ������� ������ ������ ���������� � �����
			* @return ������, ������� ��������� ��������� OutputStreamHelper, ��� ������ ���������� � �����
			*/
			virtual OutputStreamHelper* CreateOutputStreamHelper(std::ostream &oStream) = 0;
		};
	}
}