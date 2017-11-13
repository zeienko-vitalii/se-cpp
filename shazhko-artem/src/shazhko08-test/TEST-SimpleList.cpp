#include "../shazhko08/SimpleList.cpp"
#include "../shazhko08/Wheel.cpp"
#include "../shazhko08/SimpleStreamHelperFactory.cpp"
#include "../shazhko08/SimpleOutputStreamHelper.cpp"
#include "../shazhko08/SimpleInputStreamHelper.cpp"
#include "../shazhko08/StreamHelperArg.cpp"
#include "gtest/gtest.h"

TEST(SimpleList_getItemByIndex, exception) {
	Collection::SimpleList<Wheel::Wheel*> myList;
	myList.Push(new Wheel::Wheel());
	bool isException = false;
	try {
		myList[1];
	}
	catch (std::out_of_range msg) { isException = true; }
	ASSERT_TRUE(isException);
}
TEST(SimpleList_pop, exception) {
	Collection::SimpleList<Wheel::Wheel*> myList;
	myList.Push(new Wheel::Wheel());
	bool isExceprion = false;
	myList.Pop();
	try {
		myList.Pop();
	}
	catch (std::runtime_error msg) { isExceprion = true; }
	ASSERT_TRUE(isExceprion);
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}