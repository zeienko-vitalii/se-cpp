#include "gtest/gtest.h"

#include "Window.h"
#include "Button.h"

TEST(buttonConstructorWorkTest, fieldsAreCorrect) {

	//Constants for  btn1 initialization
	const int WINDOW_ID_3 = 1;
	const int X1_3 = 0;
	const int Y1_3 = 0;
	const int X2_3 = 5;
	const int Y2_3 = 7;
	const string LABEL_3 = "Label 3";
	const string BORDER_COLOR_3 = "Border color 3";

	Button btn1(WINDOW_ID_3, X1_3, Y1_3, X2_3, Y2_3, LABEL_3, BORDER_COLOR_3);

	ASSERT_EQ(btn1.getWindowId(), WINDOW_ID_3);
	ASSERT_EQ(btn1.getX1(), X1_3);
	ASSERT_EQ(btn1.getY1(), Y1_3);
	ASSERT_EQ(btn1.getX2(), X2_3);
	ASSERT_EQ(btn1.getY2(), Y2_3);
	ASSERT_EQ(btn1.getLabel(), LABEL_3);
	ASSERT_EQ(btn1.getBorderColor(), BORDER_COLOR_3);
}

