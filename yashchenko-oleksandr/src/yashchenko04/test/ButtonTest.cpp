#include <gtest\gtest.h>

#include "Button.h"

TEST(ButtonSetDataTest, setIsCorrect){
	const char* iTitle = "iTitle";
	const char* iColor = "Color";

	Button test;

	test.setData(iTitle, iColor);

	ASSERT_STREQ(iTitle, test.getTitle());
	ASSERT_STREQ(iColor, test.getBorderColor());
}