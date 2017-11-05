/**
* @file StreamHelperArg.cpp
* @brief Содержит реализацию базового класса  StreamHelperArg
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "StreamHelperArg.h"
namespace Stream {
	namespace StreamHelper {
		StreamHelperArg::StreamHelperArg() {}
		StreamHelperArg::StreamHelperArg(std::string _nameVulue, std::string _value) :nameVulue(_nameVulue), value(_value) {}
		StreamHelperArg::~StreamHelperArg() {}
	}
}