/**
* @file SimpleStreamHelperFactory.cpp
* @brief Содержит реализацию класса SimpleStreamHelperFactory
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/

#include "SimpleStreamHelperFactory.h"
#include "SimpleInputStreamHelper.h"
#include "SimpleOutputStreamHelper.h"

namespace Stream {
	namespace StreamHelper {
		InputStreamHelper* SimpleStreamHelperFactory::CreateInputStreamHelper(std::istream & iStream) {
			return new SimpleInputStreamHelper(iStream);
		}
		OutputStreamHelper * SimpleStreamHelperFactory::CreateOutputStreamHelper(std::ostream & oStream)
		{
			return new SimpleOutputStreamHelper(oStream);
		}
	}
}