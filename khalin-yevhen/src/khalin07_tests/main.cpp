/**
* @file main.cpp
* @brief Contains an entry point to the console application
* @author Khalin Yevhen
* @version 0.0.1
* @date 15.10.17
*/

#include <gtest\gtest.h>
using namespace std;

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	const int res = RUN_ALL_TESTS();
	system("pause");
	return res;
}