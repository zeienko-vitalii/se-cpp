#include "gtest/gtest.h"
#include "FileStorage.h"
#include "../shazhko05/CarWheel.cpp"

TEST(CarWheel_Store, saveCarWheel) {
	CarWheel *expectationWheel = new CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear");
	CFileStorage *file = CFileStorage::Create(*expectationWheel, "saveCarWheel.txt");
	file->Store();
	CarWheel actualityWheel;
	file = CFileStorage::Create(actualityWheel, "saveCarWheel.txt");
	file->Load();
	ASSERT_TRUE((*expectationWheel == actualityWheel));
}
TEST(CarWheel_Load, loadCarWheel) {
	CarWheel *expectationWheel = new CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear");
	CarWheel actualityWheel;
	CFileStorage* file = CFileStorage::Create(actualityWheel, "saveCarWheel.txt");
	file->Load();
	ASSERT_TRUE((*expectationWheel == actualityWheel));
}