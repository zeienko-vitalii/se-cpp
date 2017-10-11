#include <gtest\gtest.h>
#include "..\khalin05\PrintableKeyboardButton.h"
#include "..\khalin05\PrintableKeyboardButton.cpp"

TEST(PKeyboardButton, OnLoad_sendStubToStream_shouldSetDataFromStub) {
	PKeyboardButton btn(ButtonForm::RECTANGULAR, 101, "Z"); // condition is false by default
	std::stringstream stub;

	const string expectedName = "Q";
	const int expectedCode = 55;
	const bool expectedCondition = true;

	stub << expectedName << std::endl << expectedCode << std::endl << expectedCondition;

	// act
	btn.OnLoad(stub);
	const string actualName = btn.getName();
	const int actualCode = btn.getCode();
	const bool actualCondition = btn.getCondition();

	ASSERT_EQ(expectedName, actualName);
	ASSERT_EQ(expectedCode, actualCode);
	ASSERT_EQ(expectedCondition, actualCondition);
}

TEST(PKeyboardButton, OnStore_sendStubToStream_shouldSendDataToStub) {
	const char expectedName = 'Q';
	const char expectedCode = '5';
	const char expectedCondition = '1';

	PKeyboardButton btn(ButtonForm::RECTANGULAR, expectedCode - '0', string(1, expectedName));
	btn.setCondition(expectedCondition - '0');
	std::stringstream stub;

	// act
	btn.OnStore(stub);

	// pulling data from stub:
	int dataPosIndex = 0;
	const short endlOffset = 1;
	const short expectedNamePos = dataPosIndex;
	const short expectedCodePos = ++dataPosIndex + endlOffset;
	const short expectedConditionPos = ++dataPosIndex + endlOffset + endlOffset;
	const char actualName = stub.str()[expectedNamePos];
	const char actualCode = stub.str()[expectedCodePos];
	const char actualCondition = stub.str()[expectedConditionPos];

	ASSERT_EQ(expectedName, actualName);
	ASSERT_EQ(expectedCode, actualCode);
	ASSERT_EQ(expectedCondition, actualCondition);
}

