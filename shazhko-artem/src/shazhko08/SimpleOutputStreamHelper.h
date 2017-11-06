/**
* @file SimpleOutputStreamHelper.h
* @brief �������� ���������� ������ SimpleOutputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include "OutputStreamHelper.h"
#include <iostream>
namespace Stream {
	namespace StreamHelper {

		/**
		* ��������������� ����� ��� ������ ���������� � �����
		*/
		class  SimpleOutputStreamHelper :public OutputStreamHelper
		{
		public:
			/**
			* �����������
			* @param _oStream ����� ������
			*/
			SimpleOutputStreamHelper(std::ostream& _oStream);
			/**
			* ����������
			*/
			virtual ~SimpleOutputStreamHelper();
			/**
			* ������� ��� ������ ������ � �����
			* @param arg ��������, ������� ���������� �������� � �����
			*/
			void Write(StreamHelperArg* arg) override;
		private:
			// ����� ������
			std::ostream *  oStream;
		};
	}
}