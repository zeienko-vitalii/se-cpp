#include <iostream>
#include "gtest/gtest.h"
#include "Room.h"
#include "GraphScreen.h"
#include "Screen.h"
#include "HousingRoom.h"
#include "HousingRoomScreen.h"
#include <string>

using namespace std;

TEST(classRoom, constructorsGeters) {
	const float Length = 5.05;
	const float  Widht = 3.03;
	const float Height = 3.57;
	Room room( Length, Widht, Height);

	float actualLength = room.getLength();
	float actualWidht = room.getWidht();
	float actualHeight = room.getHeight();

	ASSERT_EQ(Length, actualLength);
	ASSERT_EQ(Widht, actualWidht);
	ASSERT_EQ(Height, actualHeight);
}

TEST(classHousingRoom, constructorsGeters) {
	const string Name = "Room #313";
	const int SeatsNumber = 20;
	const string Purpose = "Laboratory room";

	HousingRoom housingRoom(Name, SeatsNumber, Purpose);

	string actualName = housingRoom.getName();
	int actualSeatsNumber = housingRoom.getSeatsNumber();
	string actualPurpose = housingRoom.getPurpose();

	ASSERT_EQ(Name, actualName);
	ASSERT_EQ(SeatsNumber ,actualSeatsNumber);
	ASSERT_EQ(Purpose, actualPurpose);
}

TEST(toString, display) {


	const float LENGTH = 5.05;
	const float WIDHT = 3.03;
	const float HEIGHT = 3.57;
	Room room(LENGTH, WIDHT, HEIGHT);

	Screen view(&room);
	string str ;

		str += "Length: " + to_string(LENGTH) + "\n";
		str += "Widht: " + to_string(WIDHT) + "\n";
		str += "Height: " + to_string(HEIGHT) + "\n";

	ASSERT_EQ(room.toString(), str);

}

TEST(toStringHousingRoom, display) {


	const float LENGTH_ROOM = 5.05;
	const float WIDHT_ROOM = 3.03;
	const float HEIGHT_ROOM = 3.57;
	const string NAME_HOUSINGROOM = "Room #313";
	const int SEATSNUMBER_HOUSINGROOM = 20;
	const string PURPOSE_HOUSINGROOM = "Laboratory room";
	HousingRoom housingRoom(LENGTH_ROOM, WIDHT_ROOM, HEIGHT_ROOM, NAME_HOUSINGROOM, SEATSNUMBER_HOUSINGROOM, PURPOSE_HOUSINGROOM);

	//HousingRoom mscreen(&housingRoom);

	string str;
		str += "Length: " + to_string(LENGTH_ROOM) + "\n";
		str += "Widht: " + to_string(WIDHT_ROOM) + "\n";
		str += "Height: " + to_string(HEIGHT_ROOM) + "\n";
		str += "Name: " + NAME_HOUSINGROOM + "\n";
		str += "Seats Number: " + to_string(SEATSNUMBER_HOUSINGROOM) + "\n";
		str += "Purpose: " + PURPOSE_HOUSINGROOM + "\n";

		ASSERT_EQ(str, housingRoom.toString());


}
