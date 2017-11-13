#include "../shazhko05/Wheel.cpp"
#include "../shazhko05/SimpleStreamHelperFactory.cpp"
#include "../shazhko05/SimpleOutputStreamHelper.cpp"
#include "../shazhko05/SimpleInputStreamHelper.cpp"
#include "../shazhko05/StreamHelperArg.cpp"
#include "gtest/gtest.h"
#include "FileStorage.h"


TEST(Wheel_Store, saveWheel) {
	Wheel *expectationWheel = new Wheel(6, 10, EUNITS_CENTIMETERS);
	CFileStorage *file = CFileStorage::Create(*expectationWheel, "saveWheel.txt");
	file->Store();
	Wheel actualityWheel;
	file = CFileStorage::Create(actualityWheel, "saveWheel.txt");
	file->Load();
	ASSERT_TRUE((*expectationWheel== actualityWheel));
}
TEST(Wheel_Load, loadWheel) {
	Wheel *expectationWheel = new Wheel(6, 10, EUNITS_CENTIMETERS);
	Wheel actualityWheel;
	CFileStorage* file = CFileStorage::Create(actualityWheel, "saveWheel.txt");
	file->Load();
	ASSERT_TRUE((*expectationWheel == actualityWheel));
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}