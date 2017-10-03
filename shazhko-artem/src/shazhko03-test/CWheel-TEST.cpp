#include "gtest/gtest.h"
#include "CWheel.h"

/**
* Тестирование конструктора класса CWheel
*/
TEST(CWheel_con, createWheelWithParam) {
	double expectationDiameter = 10;
	double expectationWidth = 4;
	EUnits expectationUnits = EUnits::EUNITS_CENTIMETERS;
	CWheel *wheel = new CWheel(10, 4, EUnits::EUNITS_CENTIMETERS);
	double actualityDiameter = wheel->GetDiameter();
	double actualityWidth = wheel->GetWidth();
	EUnits actualityUnits = wheel->GetUnits();
	EXPECT_EQ(expectationDiameter, actualityDiameter);
	EXPECT_EQ(expectationWidth, actualityWidth);
	EXPECT_EQ(expectationUnits, actualityUnits);
}

/**
* Тестирование функции, возвращает объем колеса
*/
TEST(CWheel_Value, CalcValue) {
	CWheel *wheel = new CWheel(10, 4, EUnits::EUNITS_CENTIMETERS);
	double actuality = wheel->Volume();
	double expectation = 314.15926535897932384626433832795;
	EXPECT_DOUBLE_EQ(actuality, expectation);
}
/**
* Тестирование функции, которая конвертирует тип 'EUnits' в string
*/
TEST(CWheel_ConvertEUnitToString, ConvertEUnitToString) {
	std::string actuality = CWheel::ConvertEUnitToString(EUnits::EUNITS_CENTIMETERS);
	std::string  expectation = "CENTIMETERS";
	EXPECT_STREQ(actuality.c_str(), expectation.c_str());
}

/**
* Тестирование функции, которая задает диаметр
*/
TEST(CWheel_SetDiameter, SetDiameter) {
	CWheel *wheel = new CWheel();
	double expectation = 5.1;
	wheel->SetDiameter(expectation);
	double actuality = wheel->GetDiameter();
	EXPECT_DOUBLE_EQ(actuality, expectation);
}
/**
* Тестирование функции, которая возвращает диаметр
*/
TEST(CWheel_GetDiameter, GetDiameter) {
	double expectation = 5.1;
	CWheel *wheel = new CWheel(expectation, 4, EUnits::EUNITS_CENTIMETERS);
	double actuality = wheel->GetDiameter();
	EXPECT_DOUBLE_EQ(actuality, expectation);
}

/**
* Тестирование функции, которая задает ширину
*/
TEST(CWheel_SetWidth, SetWidth) {
	CWheel *wheel = new CWheel();
	double expectation = 5.1;
	wheel->SetWidth(expectation);
	double actuality = wheel->GetWidth();
	EXPECT_DOUBLE_EQ(actuality, expectation);
}
/**
* Тестирование функции, которая возвращает ширину
*/
TEST(CWheel_GetWidth, GetWidth) {
	double expectation = 5.1;
	CWheel *wheel = new CWheel(2, expectation, EUnits::EUNITS_CENTIMETERS);
	double actuality = wheel->GetWidth();
	EXPECT_DOUBLE_EQ(actuality, expectation);
}
/**
* Тестирование функции, которая задает единицы измерения
*/
TEST(CWheel_SetUnits, SetUnits) {
	CWheel *wheel = new CWheel();
	EUnits expectation = EUnits::EUNITS_CENTIMETERS;
	wheel->SetUnits(expectation);
	EUnits actuality = wheel->GetUnits();
	EXPECT_DOUBLE_EQ(actuality, expectation);
}
/**
* Тестирование функции, которая возвращает единицы измерения
*/
TEST(CWheel_GetUnits, GetUnits) {
	EUnits expectation = EUnits::EUNITS_CENTIMETERS;
	CWheel *wheel = new CWheel(2, 5, expectation);
	EUnits actuality = wheel->GetUnits();
	EXPECT_DOUBLE_EQ(actuality, expectation);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}