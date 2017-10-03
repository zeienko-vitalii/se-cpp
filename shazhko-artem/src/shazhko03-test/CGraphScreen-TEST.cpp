#include "CGraphScreen.h"
#include "CWheel.h"
#include "gtest\gtest.h"

TEST(CGraphScreen_con, createCGraphScreen) {
	CWheel *expectation = new CWheel(10, 4, EUnits::EUNITS_CENTIMETERS);
	CGraphScreen *graph = new CGraphScreen(expectation);
	CWheel *actuality = &graph->GetDataSource();
	EXPECT_TRUE(*expectation == *actuality);
}

TEST(CGraphScreen_SetDataSource, SetDataSource) {
	CWheel *expectation = new CWheel(10, 4, EUnits::EUNITS_CENTIMETERS);
	CGraphScreen *graph = new CGraphScreen(NULL);
	graph->SetDataSource(expectation);
	CWheel *actuality = &graph->GetDataSource();
	EXPECT_TRUE(*expectation==*actuality);
}
