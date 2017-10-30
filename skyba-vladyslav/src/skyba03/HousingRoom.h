/*
 * @file HousingRoom.h
 * Contains the declaration of the "HousingRoom" object.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 **/
#include "Room.h"
#include <string>
#ifndef HOUSINGROOM_H_
#define HOUSINGROOM_H_
/**
 * Class containing the implementation of a HousingRoom.
 */
class HousingRoom : public Room
{
private:
	string name;
	int seatsNumber;
    string purpose;

public:
    /**
    * Default constructor, all fields are set to default.
    */
	HousingRoom();

	HousingRoom(string name, int seatsNumber, string purpose);

	HousingRoom(float length, float widht, float height, string name, int seatsNumber, string purpose);
	/**
	* Getter of Housing Room name.
    */
	string getName();
	/**
    * Getter of Housing Room seats number.
	*/
    int getSeatsNumber();
    /**
    * Getter of Housing Room purpose.
    */
	string getPurpose();
	/**
    * Setter of Housing Room name.
	*/
	void setName(string name);
	/**
	* Setter of Housing Room seatsNumber.
    */
	void setSeatsNumber (int seatsNumber);
	/**
	* Setter of Housing Room purpose.
    */
	void setPurpose(string purpose);

	virtual string toString();

	virtual ~HousingRoom();
};

#endif /* HOUSINGROOM_H_ */
