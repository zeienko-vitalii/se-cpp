#include "gtest\gtest.h"
#include "Jar.h"

TEST(JarConstructorTest, fieldsAreCorrect){
	const const float v = 100;
	const units unit = cubicMeter;
	const string typeOfCap = "";
	const string material = "";

	Jar test(unit, v, typeOfCap, material);

	ASSERT_EQ(test.getUnit(), unit);
	ASSERT_EQ(test.v, v);
	ASSERT_EQ(test.getTypeOfCap(), typeOfCap);
	ASSERT_EQ(test.getMaterial(), material);
}

