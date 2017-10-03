#include "gtest/gtest.h"
#include "CCarWheel.h"


TEST(CCarWheel_con, createCarWheel) {
	std::string expectationTireName = "x10";
	std::string expectationTireManufacturer = "Canon";
	CCarWheel *wheel = new CCarWheel(10, 4,
		EUnits::EUNITS_CENTIMETERS, expectationTireName, expectationTireManufacturer);

	std::string  actualityTireName = wheel->GetTireName();
	std::string  actualityTireManufacturer = wheel->GetTireManufacturer();

	EXPECT_STREQ(actualityTireName.c_str(), expectationTireName.c_str());
	EXPECT_STREQ(actualityTireManufacturer.c_str(), expectationTireManufacturer.c_str());
}

TEST(CCarWhee_GetTireName, GetTireName) {
	std::string expectation = "x10";
	CCarWheel *wheel = new CCarWheel(10, 4, EUnits::EUNITS_CENTIMETERS, expectation, "Canon");
	std::string actuality = wheel->GetTireName();
	EXPECT_STREQ(actuality.c_str(), expectation.c_str());
}

TEST(CCarWhee_GetTireManufacturer, GetTireManufacturer) {
	std::string expectation = "Canon";
	CCarWheel *wheel = new CCarWheel(10, 4, EUnits::EUNITS_CENTIMETERS, "x10", expectation);
	std::string  actuality = wheel->GetTireManufacturer();
	EXPECT_STREQ(actuality.c_str(), expectation.c_str());
}

TEST(CCarWhee_SetTireName, SetTireName) {
	std::string expectation = "x10";
	CCarWheel *wheel = new CCarWheel(2, 4, EUnits::EUNITS_CENTIMETERS, expectation, "Canon");
	wheel->SetTireName(expectation);
	std::string actuality = wheel->GetTireName();
	EXPECT_STREQ(actuality.c_str(), expectation.c_str());
}

TEST(CCarWhee_GetTireManufacturer, SetUnits) {
	std::string expectation = "Canon";
	CCarWheel *wheel = new CCarWheel(2, 4, EUnits::EUNITS_CENTIMETERS, "X10", expectation);
	wheel->SetTireManufacturer(expectation);
	std::string actuality = wheel->GetTireManufacturer();
	EXPECT_STREQ(actuality.c_str(), expectation.c_str());
}
