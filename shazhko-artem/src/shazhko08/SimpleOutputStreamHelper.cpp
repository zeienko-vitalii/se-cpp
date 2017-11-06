/**
* @file SimpleOutputStreamHelper.cpp
* @brief �������� ���������� ������  SimpleOutputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "SimpleOutputStreamHelper.h"
namespace Stream {
	namespace StreamHelper {
		SimpleOutputStreamHelper::SimpleOutputStreamHelper(std::ostream& _oStream) :oStream(&_oStream) {}


		SimpleOutputStreamHelper::~SimpleOutputStreamHelper() { oStream = NULL; }

		void SimpleOutputStreamHelper::Write(StreamHelperArg* arg)
		{
			*oStream << arg->nameVulue << " : " << arg->value << "\n";
		}
	}
}