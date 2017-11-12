#include <gtest\gtest.h>
#include "List.h"
TEST(AddTest, addResultIsCorrect){
	const units unit = l;
	const float v = 500;
	Capacity test(unit, v);
	List list;
	list.add(test);
	Capacity *test2 = list[0];
	ASSERT_EQ(unit, test2->getUnit());
	ASSERT_EQ(v, test2->v);
}

TEST(RemoveTest, removeResultIsCorrect){
	const units unit = l;
	const float v = 500;
	const units unit2 = ml;
	const float v2 = 5000;
	Capacity test(unit, v);
	Capacity test2(unit2, v2);
	List list;
	list.add(test);
	list.add(test2);
	list.remove(0);
	Capacity *test3 = list[0];
	ASSERT_EQ(unit2, test3->getUnit());
	ASSERT_EQ(v2, test3->v);

}