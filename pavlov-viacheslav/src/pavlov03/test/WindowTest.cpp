#include "gtest/gtest.h"

#include "Window.h"

TEST(windowConstructorWorkTest, fieldsAreCorrect) {

	//Constants for  btn1 initialization
	const int WINDOW_ID_3 = 1;
	const int X1_3 = 0;
	const int Y1_3 = 0;
	const int X2_3 = 5;
	const int Y2_3 = 7;

	Window win1(WINDOW_ID_3, X1_3, Y1_3, X2_3, Y2_3);

	ASSERT_EQ(win1.getWindowId(), WINDOW_ID_3);
	ASSERT_EQ(win1.getX1(), X1_3);
	ASSERT_EQ(win1.getY1(), Y1_3);
	ASSERT_EQ(win1.getX2(), X2_3);
	ASSERT_EQ(win1.getY2(), Y2_3);
}

TEST(WidthTest, widthIsCorrect) {

	//Constants for  win1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 100;
	const int Y1_1 = 0;
	const int X2_1 = 150;
	const int Y2_1 = 0;
	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	int expect = 50;
	int actual = win1.width();
	ASSERT_EQ(expect, actual);
}

TEST(HeightTest, heightIsCorrect) {

	//Constants for  win1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 0;
	const int Y1_1 = 300;
	const int X2_1 = 0;
	const int Y2_1 = 150;
	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	int expect = 150;
	int actual = win1.height();
	ASSERT_EQ(expect, actual);
}
