#include "gtest\gtest.h"

#include "Capacity.h"

TEST(CapacityConstructorTest, fieldsAreCorrect){
	const float v = 100;
	const units unit = cubicMeter;

	Capacity test(unit, v);

	ASSERT_EQ(test.getUnit(), unit);
	ASSERT_EQ(test.v, v);
}

TEST(SquareTest, squareIsCorrect){
	const float v = 314;
	const units unit = cubicMeter;

	Capacity test(unit, v);
	float expect = (float)61.8;
	float actual = test.square(1);

	ASSERT_EQ(expect, actual);
}

TEST(LargeTest, largeAreTrue){
	const float v = 100;
	const units unit = cubicMeter;
	Capacity test(unit, v);
	const float v2 = 314;
	const units unit2 = cubicMeter;
	Capacity test2(unit2, v2);
	bool expect = true;
	bool actual = test2 >= test;

	ASSERT_EQ(expect, actual);
}

