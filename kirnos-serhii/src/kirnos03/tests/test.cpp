#include <iostream>
#include <cstring>
#include "gtest/gtest.h"
#include "RoomHousing.h"
#include "Room.h"
#include "GraphScreen.h"
#include "Screen.h"
using namespace std;

TEST(classRoom, constructorsGeters) {
	const int h = 4;
	const int w = 8;
	const int l = 10;
	Room *r = new Room(h, w, l);
	Room *actual = new Room(*r);
	int actualH = r->getHeight();
	int actualW = r->getWidth();
	int actualL = r->getLength();
	ASSERT_EQ(h, actualH);
	ASSERT_EQ(w, actualW);
	ASSERT_EQ(l, actualL);
	ASSERT_EQ(r->getHeight(), actual->getHeight());
	ASSERT_EQ(r->getWidth(), actual->getWidth());
	ASSERT_EQ(r->getLength(), actual->getLength());
	delete r;
	delete actual;
}

TEST(classRoom, Volume) {
	const int h = 4;
	const int w = 8;
	const int l = 10;
	const int volume = h * w * l;
	Room *r = new Room(h, w, l);
	int actualVolume = r->Volume();
	ASSERT_EQ(volume, actualVolume);
	delete r;
}

TEST(classRoomHousing, constructorsGeters) {
	const int h = 4;
	const int w = 8;
	const int l = 10;
	const char *name = "k 202";
	const int numb = 28;
	const AppointmentRoom ar = PRACTICAL;

	RoomHousing *r = new RoomHousing(h, w, l, name, numb, ar);
	RoomHousing *actual = new RoomHousing(*r);

	int actualH = r->getHeight();
	int actualW = r->getWidth();
	int actualL = r->getLength();
	const char *actualName = r->getNmae();
	int actualNumb = r->getNumberOfSeats();
	AppointmentRoom actualAr = r->getAppointment();

	ASSERT_EQ(h, actualH);
	ASSERT_EQ(w, actualW);
	ASSERT_EQ(l, actualL);
	ASSERT_EQ(numb, actualNumb);
	ASSERT_EQ(ar, actualAr);

	ASSERT_EQ(r->getHeight(), actual->getHeight());
	ASSERT_EQ(r->getWidth(), actual->getWidth());
	ASSERT_EQ(r->getLength(), actual->getLength());
	ASSERT_EQ(r->getNumberOfSeats(), actual->getNumberOfSeats());
	ASSERT_EQ(r->getAppointment(), actual->getAppointment());

	int cmp = strcmp(name,actualName);
	int expected = 0;
	ASSERT_EQ(expected, cmp);

	delete r;
	delete actual;
}
