/**
* @file LinkedListTests.cpp
* @brief Contains tests of LinkedList class.
* @author Khalin Yevhen
* @version 0.0.1
* @date 15.10.17
*/

// Look at TEST_MODE macro definition in LinkedList.h
// Some tests could be not executed.

#include <gtest\gtest.h>
#include "FieldsAccessor.h"

using namespace std;

/**
* @brief A dummy class for passing as a parameter.
*/
class Dummy { };

TEST(LinkedList, addLast_add3Elements_sizeShouldBeEqualTo3) {
	LinkedList<Dummy> list;
	const int expectedSize = 3;

	// act: add dummy objects three times
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.addLast(&Dummy());

	const int actualSize = list.size();

	ASSERT_EQ(expectedSize, actualSize);
}

#ifdef TEST_MODE 
TEST(LinkedList, addLast_compNextPrevPtrsWith1ElemInList_shouldPointToEachOther) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> ac(&list);

	// act:
	list.addLast(&Dummy());
	auto head = ac.getHead();
	auto tail = ac.getTail();

	ASSERT_EQ(head, tail);
}
#endif

#ifdef TEST_MODE 
TEST(LinkedList, addLast_add3Elems_shouldBeAdded—onsistently) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> ac(&list);
	Dummy *dummy1 = new Dummy();
	Dummy *dummy2 = new Dummy();
	Dummy *dummy3 = new Dummy();

	// act: add elements and check their sequence:
	list.addLast(dummy1);
	list.addLast(dummy2);
	list.addLast(dummy3);

	auto head = ac.getHead();
	const bool firstIsDummy1 = head->element == dummy1;

	head = head->next;
	const bool secondIsDummy2 = head->element == dummy2;

	head = head->next;
	const bool thirdIsDummy3 = head->element == dummy3;

	EXPECT_TRUE(firstIsDummy1);
	EXPECT_TRUE(secondIsDummy2);
	ASSERT_TRUE(thirdIsDummy3);

	delete dummy1, dummy2, dummy3;
}
#endif

#ifdef TEST_MODE
TEST(LinkedList, addFirst_add3Elems_shouldBeAdded—onsistently) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> ac(&list);
	Dummy *dummy1 = new Dummy();
	Dummy *dummy2 = new Dummy();
	Dummy *dummy3 = new Dummy();

	// act: add elements and check their sequence:
	list.addFirst(dummy1);
	list.addFirst(dummy2);
	list.addFirst(dummy3);

	auto head = ac.getHead();
	const bool firstIsDummy3 = head->element == dummy3;

	head = head->next;
	const bool secondIsDummy2 = head->element == dummy2;

	head = head->next;
	const bool thirdIsDummy1 = head->element == dummy1;

	EXPECT_TRUE(firstIsDummy3);
	EXPECT_TRUE(secondIsDummy2);
	ASSERT_TRUE(thirdIsDummy1);

	delete dummy1, dummy2, dummy3;
}
#endif

TEST(LinkedList, addFirst_add3Elems_sizeShouldBeEqualTo3) {
	LinkedList<Dummy> list;
	const int expectedSize = 3;

	// act: add dummy objects three times
	list.addFirst(&Dummy());
	list.addFirst(&Dummy());
	list.addFirst(&Dummy());

	const int actualSize = list.size();

	ASSERT_EQ(expectedSize, actualSize);
}

#ifdef TEST_MODE
TEST(LinkedList, addFirst_compNextPrevPtrsWith1ElemInList_shouldPointToEachOther) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> ac(&list);

	// act:
	list.addFirst(&Dummy());
	auto head = ac.getHead();
	auto tail = ac.getTail();

	ASSERT_EQ(head, tail);
}
#endif

TEST(LinkedList, clean_addElemsAndClean_sizeShouldBeEqualTo0) {
	LinkedList<Dummy> list;
	const int expectedSize = 0;

	// act: add dummy objects
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.addLast(&Dummy());

	// act: clean
	list.clean();

	const int actualSize = list.size();

	ASSERT_EQ(expectedSize, actualSize);
}

