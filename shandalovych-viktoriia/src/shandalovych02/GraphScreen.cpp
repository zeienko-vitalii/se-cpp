/*
 * @file GraphScreen.cpp  �������� ���������� ������ ��� ������ �������������.
 *
 * @data Created on: 26 ����. 2017 �.
 *    @author: Viktotia
 */

#include <iostream>
#include "Wheel.h"
#include "GraphScreen.h"

using namespace std;
GraphScreen::GraphScreen() {
	// TODO Auto-generated constructor stub
}

GraphScreen::GraphScreen(Wheel* wheel) {
	this->wheel = wheel;

}

GraphScreen::~GraphScreen() {
	// TODO Auto-generated destructor stub
}

void GraphScreen::setDataSource(const Wheel* wheel) {
	this->wheel = wheel;

}
void GraphScreen::PrintData(const Wheel& wheel) {

	cout << "����� ������: " << wheel.volume() <<"\n";

	cout << "            * * *             \n";
	cout << "        * *   *   * *         \n";
	cout << "      * *     *     * *       \n";
	cout << "    *    *    *    *    *     \n";
	cout << "  *   *   *   *   *   *   *   \n";
	cout << "  *     *  *  *  *  *     *   \n";
	cout << "*         * * * * *         * \n";
	cout << "***************************** \n";
	cout << "*         * * * * *         * \n";
	cout << "  *     *  *  *  *  *      *  \n";
	cout << "  *   *   *   *   *   *   *   \n";
	cout << "    *    *    *    *    *     \n";
	cout << "      * *     *     * *       \n";
	cout << "        * *   *   * *         \n";
	cout << "            * * *             \n";

}

void GraphScreen::PrintData() {
	PrintData(*this->wheel);
}
