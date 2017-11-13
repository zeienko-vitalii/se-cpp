#include "../shazhko07/SimpleList.cpp"
#include "../shazhko07/Wheel.cpp"
#include "../shazhko07/CarWheel.cpp"
#include "../shazhko07/SimpleStreamHelperFactory.cpp"
#include "../shazhko07/SimpleOutputStreamHelper.cpp"
#include "../shazhko07/SimpleInputStreamHelper.cpp"
#include "../shazhko07/StreamHelperArg.cpp"
#include "../shazhko07/CarWheelFilterByDiameter.cpp"
#include "../shazhko07/CarWheelFilterByManufacturer.cpp"
#include "../shazhko07/CarWheelFilterDecorator.cpp"
#include "../shazhko07/CollectionRequest.hpp"
#include "gtest/gtest.h"


void CallBackFunct(Collection::ICollection<Wheel::CarWheel *>* collection) {
	bool isDone = false;
	auto expectationCarWheel1 = Wheel::CarWheel(508, 500, EUnits::EUNITS_MILLIMETRES, "MP-16 ", "Nokian");
	auto expectationCarWheel2 = Wheel::CarWheel(508, 275, EUnits::EUNITS_MILLIMETRES, "Hakkapeliitta 9 (шип)", "Nokian");
	ASSERT_TRUE(collection);
	ASSERT_EQ(collection->Count(), 2);
	try {
		auto actualityItem1 = (*collection)[0];
		auto actualityItem2 = (*collection)[1];
		ASSERT_TRUE(expectationCarWheel1 == *actualityItem1);
		ASSERT_TRUE(expectationCarWheel2 == *actualityItem2);
	}
	catch (...) {}
}

TEST(SimpleList_pop, exception) {
	Collection::SimpleList<Wheel::CarWheel*> myList;
	myList.Push(new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear"));
	myList.Push(new Wheel::CarWheel(508, 500, EUnits::EUNITS_MILLIMETRES, "MP-16 ", "Nokian"));
	myList.Push(new Wheel::CarWheel(508, 275, EUnits::EUNITS_MILLIMETRES, "Hakkapeliitta 9 (шип)", "Nokian"));

	CarWheelFilter *filter = new CarWheelFilterByDiameter(508.0, new CarWheelFilterByManufacturer("Nokian", NULL));

	CollectionRequest::Find<CarWheelFilter, Wheel::CarWheel*>(&myList, filter, &CallBackFunct);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}