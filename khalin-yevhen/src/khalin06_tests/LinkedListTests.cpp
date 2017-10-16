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

TEST(LinkedList, addLast_add3Elements_sizeShouldBeEqTo3) {
	LinkedList<Dummy> list;
	const int expectedSize = 3;

	// act
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

TEST(LinkedList, addFirst_add3Elems_sizeShouldBeEqTo3) {
	LinkedList<Dummy> list;
	const int expectedSize = 3;

	// act
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

TEST(LinkedList, clean_addElemsAndClean_sizeShouldBeEqTo0) {
	LinkedList<Dummy> list;
	const int expectedSize = 0;

	// act
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.clean();
	const int actualSize = list.size();

	ASSERT_EQ(expectedSize, actualSize);
}

TEST(LinkedList, removeFirst_removeFromListWith3Elem_sizeShouldBeEqTo2) {
	LinkedList<Dummy> list;
	const int expectedSize = 2;

	// act
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.removeFirst();

	const int actualSize = list.size();

	ASSERT_EQ(expectedSize, actualSize);
}

#ifdef TEST_MODE
TEST(LinkedList, removeFirst_removeFromListWith2Elem_headShouldPointToSecElem) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> accessor(&list);
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();
	const auto expectedElement = secDummy;

	// act:
	list.addFirst(secDummy);
	list.addFirst(firstDummy);
	list.removeFirst();
	const auto actualElement = accessor.getHead()->element;

	ASSERT_EQ(expectedElement, actualElement);
	delete firstDummy, secDummy;
}
#endif

#ifdef TEST_MODE
TEST(LinkedList, removeFirst_removeFromListWith2Elem_headAndTailShouldPointToEachOther) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> accessor(&list);

	// act:
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.removeFirst();

	auto head = accessor.getHead();
	auto tail = accessor.getTail();

	ASSERT_EQ(head, tail);
}
#endif

TEST(LinkedList, removeLast_removeFromListWith3Elem_sizeShouldBeEqTo2) {
	LinkedList<Dummy> list;
	const int expectedSize = 2;

	// act: add dummy objects
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.removeLast();

	const int actualSize = list.size();

	ASSERT_EQ(expectedSize, actualSize);
}

#ifdef TEST_MODE
TEST(LinkedList, removeLast_removeFromListWith2Elem_tailShouldPointToFirstElem) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> accessor(&list);
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();
	const auto expectedElement = firstDummy;

	// act:
	list.addFirst(secDummy);
	list.addFirst(firstDummy);
	list.removeLast();
	const auto actualElement = accessor.getHead()->element;

	ASSERT_EQ(expectedElement, actualElement);
	delete firstDummy, secDummy;
}
#endif

// just checking list size after calling remove(int) method.
TEST(LinkedList, removeByIndex_removeFirstFromListWith3Elems_sizeShouldBeEqTo2) {
	LinkedList<Dummy> list;
	const int expectedSize = 2;
	auto removingIndex = 0;

	// act: add dummy objects
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.addLast(&Dummy());
	list.remove(removingIndex);
	const int actualSize = list.size();

	ASSERT_EQ(expectedSize, actualSize);
}

#ifdef TEST_MODE
TEST(LinkedList, removeByIndex_removeFirstElem_headShouldPointToSecond) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> accessor(&list);
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();
	const auto expectedElement = secDummy;
	int removingIndex = 0;

	// act:
	list.addLast(firstDummy);
	list.addLast(secDummy);
	list.remove(removingIndex);
	auto actualElement = accessor.getTail()->element;

	ASSERT_EQ(expectedElement, actualElement);
	delete firstDummy, secDummy;
}
#endif

#ifdef TEST_MODE
TEST(LinkedList, removeByIndex_removeLast_tailShouldBeEqToFirst) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> accessor(&list);
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();

	const auto expectedElement = firstDummy;
	int removingIndex = 1;

	// act:
	list.addLast(firstDummy);
	list.addLast(secDummy);
	list.remove(removingIndex);
	auto actualElement = accessor.getTail()->element;

	ASSERT_EQ(expectedElement, actualElement);
	delete firstDummy, secDummy;
}
#endif

#ifdef TEST_MODE
TEST(LinkedList, removeByValue_removeSecond_tailShouldBeEqToFirst) {
	LinkedList<Dummy> list;
	FieldsAccessor<Dummy> accessor(&list);
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();

	const auto expectedElement = firstDummy;
	int removingIndex = 1;

	// act:
	list.addLast(firstDummy);
	list.addLast(secDummy);
	list.remove(secDummy);
	auto actualElement = accessor.getTail()->element;

	ASSERT_EQ(expectedElement, actualElement);
	delete firstDummy, secDummy;
}
#endif

TEST(LinkedList, get_getFirstElem_resultShouldBeEqToExpected) {
	LinkedList<Dummy> list;
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();
	int expectedElemIndex = 0;
	const auto expectedElement = firstDummy;

	// act
	list.addLast(firstDummy);
	list.addLast(secDummy);
	const auto actualElem = list.get(expectedElemIndex);

	ASSERT_EQ(expectedElement, actualElem);
	delete firstDummy, secDummy;
}

TEST(LinkedList, get_getLastElem_resultShouldBeEqToExpected) {
	LinkedList<Dummy> list;
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();
	int expectedElemIndex = 1;
	const auto expectedElement = secDummy;

	// act
	list.addLast(firstDummy);
	list.addLast(secDummy);
	const auto actualElem = list.get(expectedElemIndex);

	ASSERT_EQ(expectedElement, actualElem);
	delete firstDummy, secDummy;
}

TEST(LinkedList, insert_getByIndex_shouldReturnInserted) {
	LinkedList<Dummy> list;
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();
	Dummy *insDummy = new Dummy();
	int insertingIndex = 1;
	auto expectedElem = insDummy;

	// act
	list.addLast(firstDummy);
	list.addLast(secDummy);
	list.insert(insertingIndex, insDummy);

	const auto actualElem = list[insertingIndex];

	ASSERT_EQ(expectedElem, actualElem);
	delete firstDummy, secDummy, insDummy;
}

TEST(LinkedList, insert_insertInMiddleCompRet_lastShouldBeEqToSecElem) {
	LinkedList<Dummy> list;
	Dummy *firstDummy = new Dummy();
	Dummy *secDummy = new Dummy();
	Dummy *insDummy = new Dummy();
	int insertingIndex = 1;
	auto expectedLastElem = secDummy;

	// act
	list.addLast(firstDummy);
	list.addLast(secDummy);
	list.insert(insertingIndex, insDummy);

	const auto actualLastElem = list[list.size() - 1];

	ASSERT_EQ(expectedLastElem, actualLastElem);
	delete firstDummy, secDummy, insDummy;
}