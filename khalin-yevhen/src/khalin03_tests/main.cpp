/**
* @file main.cpp
* @brief Contains the entry point to the console application
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#include <gtest\gtest.h>

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	const int res = RUN_ALL_TESTS();
	system("pause");
	return res;
}