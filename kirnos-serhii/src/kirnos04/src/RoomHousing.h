/**
 * @file RoomHousing.h
 * @brief Хранит описание класса RoomHousing
 * @author Kirnos Serhii
 * @version 0
 * @date 30.10.17
 */

#pragma once
#include "Room.h"
#include "AppointmentRoom.h"
#include <iostream>
#include <windows.h>
using namespace std;

/**
 * Класс расширяющий комнату к комната в корпусе
 */
class RoomHousing: public Room {
private:
	char *name; /// Имя комнаты
	int numberOfSeats;	/// Количество комнат
	AppointmentRoom appointment; /// Предназначение комнаты
public:
	RoomHousing(int H, int W, int L, const char *NAME, int NS,
			AppointmentRoom A) ;

	RoomHousing(const RoomHousing& RH) ;

	~RoomHousing();

	const char* getNmae() const ;

	int getNumberOfSeats() const ;

	AppointmentRoom getAppointment() const ;
};
