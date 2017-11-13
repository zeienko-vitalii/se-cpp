#include "../shazhko06/SimpleList.cpp"
#include "../shazhko06/Wheel.cpp"
#include "../shazhko06/CarWheel.cpp"
#include "../shazhko06/SimpleStreamHelperFactory.cpp"
#include "../shazhko06/SimpleOutputStreamHelper.cpp"
#include "../shazhko06/SimpleInputStreamHelper.cpp"
#include "../shazhko06/StreamHelperArg.cpp"
#include "../shazhko06/IOCollection.cpp"
#include "gtest/gtest.h"
#include "FileStorage.h"


Wheel::CarWheel* StringToObgect1(std::string type) {
	if (type == std::string("CarWheel"))return new Wheel::CarWheel();
	else return NULL;
}

TEST(SimpleList_save, saveCollection) {
	Collection::SimpleList<Wheel::CarWheel*> expectationList;
	expectationList.Push(new Wheel::CarWheel(514.5, 295, EUNITS_CENTIMETERS, "Proxes T1 Sport SUV 295/40", "Toyo")); // вставим элемент во вторую позицию
	expectationList.Push(new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear"));
	expectationList.Push(new Wheel::CarWheel(508, 500, EUnits::EUNITS_MILLIMETRES, "MP-16 ", "Nokian"));
	expectationList.Push(new Wheel::CarWheel(508, 275, EUnits::EUNITS_MILLIMETRES, "Hakkapeliitta 9 (шип)", "Nokian"));
	auto sh = new Stream::StreamHelper::SimpleStreamHelperFactory();
	Stream::IOCollection::Save<Wheel::CarWheel*>(&expectationList, "wheelList", "CarWheelListSave.txt", sh);
	Collection::ICollection<Wheel::CarWheel*> *actualityList = NULL;
	actualityList = Stream::IOCollection::Load<Wheel::CarWheel*>("wheelList", "CarWheelListSave.txt", sh, StringToObgect1);

	ASSERT_TRUE(actualityList);
	auto it1 = actualityList->CreateIterator();
	auto it2 = expectationList.CreateIterator();
	bool isDone = true,isFound;
	for (it1->First(); !it1->IsDone(); it1->Next()) {
		isFound = false;
		for (it2->First(); !it2->IsDone(); it2->Next()) {
			if (*(it2->CurrentItem()) == *(it2->CurrentItem())) {
				isFound = true;
				break;
			}
		}
		if (!isFound) {
			isDone = false;
			break;
		}
	}
	ASSERT_TRUE(isDone);
}

TEST(SimpleList_load, loadCollection) {
	Collection::SimpleList<Wheel::CarWheel*> expectationList;
	expectationList.Push(new Wheel::CarWheel(514.5, 295, EUNITS_CENTIMETERS, "Proxes T1 Sport SUV 295/40", "Toyo")); // вставим элемент во вторую позицию
	expectationList.Push(new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear"));
	expectationList.Push(new Wheel::CarWheel(508, 500, EUnits::EUNITS_MILLIMETRES, "MP-16 ", "Nokian"));
	expectationList.Push(new Wheel::CarWheel(508, 275, EUnits::EUNITS_MILLIMETRES, "Hakkapeliitta 9 (шип)", "Nokian"));
	auto sh = new Stream::StreamHelper::SimpleStreamHelperFactory();
	Collection::ICollection<Wheel::CarWheel*> *actualityList = NULL;
	actualityList = Stream::IOCollection::Load<Wheel::CarWheel*>("wheelList", "CarWheelListSave.txt", sh, StringToObgect1);

	ASSERT_TRUE(actualityList);
	auto it1 = actualityList->CreateIterator();
	auto it2 = expectationList.CreateIterator();
	bool isDone = true, isFound;
	for (it1->First(); !it1->IsDone(); it1->Next()) {
		isFound = false;
		for (it2->First(); !it2->IsDone(); it2->Next()) {
			if (*(it2->CurrentItem()) == *(it2->CurrentItem())) {
				isFound = true;
				break;
			}
		}
		if (!isFound) {
			isDone = false;
			break;
		}
	}
	ASSERT_TRUE(isDone);
}

TEST(SimpleList_removeByIndex, oneItemCollection) {
	Collection::SimpleList<Wheel::CarWheel*> myList;
	auto expectationFirstItem = new Wheel::CarWheel(514.5, 295, EUNITS_CENTIMETERS, "Proxes T1 Sport SUV 295/40", "Toyo");
	myList.Push(expectationFirstItem); // вставим элемент во вторую позицию
	myList.Push(new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear"));
	myList.RemoveAt(1);
	ASSERT_EQ(myList.Count(), 1);
	ASSERT_EQ(expectationFirstItem, myList[0]);
}

TEST(SimpleList_removeByItem, oneItemCollection) {
	Collection::SimpleList<Wheel::CarWheel*> myList;
	auto expectationFirstItem = new Wheel::CarWheel(514.5, 295, EUNITS_CENTIMETERS, "Proxes T1 Sport SUV 295/40", "Toyo");
	auto secondItem = new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear");
	myList.Push(expectationFirstItem); // вставим элемент во вторую позицию
	myList.Push(secondItem); // вставим элемент во вторую позицию
	myList.Remove(secondItem);
	ASSERT_EQ(myList.Count(), 1);
	ASSERT_EQ(expectationFirstItem, myList[0]);
}


TEST(SimpleList_Insert, newItemAtSecondPositionCollection) {
	Collection::SimpleList<Wheel::CarWheel*> myList;
	auto firstItem = new Wheel::CarWheel(514.5, 295, EUNITS_CENTIMETERS, "Proxes T1 Sport SUV 295/40", "Toyo");
	auto expectationSecondItem = new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear");
	myList.Push(firstItem); // вставим элемент во вторую позицию
	myList.Insert(1, expectationSecondItem); // вставим элемент во вторую позицию
	ASSERT_EQ(myList.Count(), 2);
	ASSERT_EQ(expectationSecondItem, myList[1]);
}

TEST(SimpleList_push, twoItemsInCollection) {
	Collection::SimpleList<Wheel::CarWheel*> myList;
	auto expectationFirstItem = new Wheel::CarWheel(514.5, 295, EUNITS_CENTIMETERS, "Proxes T1 Sport SUV 295/40", "Toyo");
	auto expectationSecondItem = new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear");
	myList.Push(expectationFirstItem); // вставим элемент во вторую позицию
	myList.Push(expectationSecondItem);
	
	ASSERT_EQ(expectationFirstItem, myList[0]);
	ASSERT_EQ(expectationSecondItem, myList[1]);
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}