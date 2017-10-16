//#include "gtest\gtest.h"
//#include "SimpleTimer.h"
//#include "CCarWheel.h"
//#include "CScreen.h"
///**
//* Тестирование конструктора класса CGraphScreen
//*/
//TEST(SimpleTimer_constructor, createCGraphScreen) {
//	CCarWheel *iWheel1 = new CCarWheel(6, 10, EUNITS_CENTIMETERS, "X10", "Canon");
//	CScreen screen(iWheel1);
//	Timer::SimpleTimer simpleTimer(&screen,4,1000);
//
//	clock_t startClock = clock();
//	simpleTimer.Start();
//	simpleTimer.Wait(INFINITE);
//	clock_t endClock = clock();
//
//	LONGLONG time = endClock- startClock;
//	EXPECT_TRUE(time == 0);
//}
//int main(int argc, char **argv) {
//	::testing::InitGoogleTest(&argc, argv);
//	return RUN_ALL_TESTS();
//}
///**
//* Тестирование функции, которая задает данные для отображения
//*/
////TEST(CGraphScreen_SetDataSource, SetDataSource) {
////	CWheel *expectation = new CWheel(10, 4, EUnits::EUNITS_CENTIMETERS);
////	CGraphScreen *graph = new CGraphScreen(NULL);
////	graph->SetDataSource(expectation);
////	CWheel *actuality = &graph->GetDataSource();
////	EXPECT_TRUE(*expectation == *actuality);
////}
