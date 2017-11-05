#include <gtest\gtest.h>

#include "Window.h"

TEST(WindowConstructorTest, setIsCorrect){
	const int iId = 1;
	const int iX1 = 1;
	const int iX2 = 2;
	const int iY1 = 1;
	const int iY2 = 4;

	Window test(iId, iX1, iY1, iX2, iY2);

	ASSERT_EQ(iId, test.getId());
	ASSERT_EQ(iX1, test.iX1);
	ASSERT_EQ(iY1, test.iY1);
	ASSERT_EQ(iX2, test.iX2);
	ASSERT_EQ(iY2, test.iY2);
}

TEST(WigthTest, wigthIsCorrect){
	const int iId = 1;
	const int iX1 = 1;
	const int iX2 = 2;
	const int iY1 = 1;
	const int iY2 = 4;

	Window test(iId, iX1, iY1, iX2, iY2);

	const int expect = 1;
	const int actual = test.width();

	ASSERT_EQ(expect, actual);
}

TEST(HeightTest, heightIsCorrect){
	const int iId = 1;
	const int iX1 = 1;
	const int iX2 = 2;
	const int iY1 = 1;
	const int iY2 = 4;

	Window test(iId, iX1, iY1, iX2, iY2);

	const int expect = 3;
	const int actual = test.height();

	ASSERT_EQ(expect, actual);
}

TEST(SquareTest, squareIsCorrect){
	const int iId = 1;
	const int iX1 = 1;
	const int iX2 = 2;
	const int iY1 = 1;
	const int iY2 = 4;

	Window test(iId, iX1, iY1, iX2, iY2);

	const int expect = 3;
	const int actual = test.square();

	ASSERT_EQ(expect, actual);
}

TEST(CompareTest, compareResultIsCorrect){
	const int iId = 1;
	const int iX1 = 1;
	const int iX2 = 2;
	const int iY1 = 1;
	const int iY2 = 4;

	Window test(iId, iX1, iY1, iX2, iY2);
	const int iId2 = 1;
	const int iX12 = 1;
	const int iX22 = 2;
	const int iY12 = 1;
	const int iY22 = 3;

	Window test2(iId2, iX12, iY12, iX22, iY22);

	const bool expect = true;
	const bool actual = test>test2;

	ASSERT_EQ(expect, actual);
}

TEST(SumTest, SumIsCorrect){
	const int iId = 1;
	const int iX1 = 1;
	const int iX2 = 2;
	const int iY1 = 1;
	const int iY2 = 4;

	Window test(iId, iX1, iY1, iX2, iY2);
	const int iId2 = 1;
	const int iX12 = 1;
	const int iX22 = 2;
	const int iY12 = 1;
	const int iY22 = 3;

	Window test2(iId2, iX12, iY12, iX22, iY22);

	const int expectX2 = 3;
	const int expectY2 = 6;
	test += test2;

	ASSERT_EQ(expectX2, test.iX2);
	ASSERT_EQ(expectY2, test.iY2);
}