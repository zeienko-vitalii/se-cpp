#include "View3.h"

View3::View3(const RoomHousing& R) :
		BaseView(R) {
}

void View3::ShowHeader() {
	//cout << "ShowContent()" << endl;
}

void View3::ShowContent() {
	cout << "height = " << room->getHeight() << endl;
	cout << "length = " << room->getLength() << endl;
	cout << "width = " << room->getWidth() << endl;

	const RoomHousing *temp = dynamic_cast<const RoomHousing*>(room);
	if (temp != NULL) {
		cout << "name = " << temp->getNmae() << endl;
		cout << "number of seats = " << temp->getNumberOfSeats() << endl;
		cout << "appointment = ";
		switch (temp->getAppointment()) {
		case PRACTICAL:
			cout << "PRACTICAL";
			break;
		case LABORATORY:
			cout << "LABORATORY";
			break;
		case LECTURES:
			cout << "LECTURES";
			break;
		case TEACHING:
			cout << "TEACHING";
			break;
		case BUSINESS:
			cout << "BUSINESS";
		}
		cout << endl;
	}
}

void View3::ShowFooter() {
}

View3::~View3() {
	//cout << "~View3()" << endl;
}
