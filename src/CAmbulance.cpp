//
// Created by admin on 2017/03/20.
//

#include <iostream>
#include "CAmbulance.h"

using namespace std;

CAmbulance::CAmbulance() : m_number(119) {
	cout << "CAmbulance object is created!" << endl;
}

CAmbulance::~CAmbulance() {
	cout << "CAmbulance object is deleted!" << endl;
}

void CAmbulance::showNumber() {
	cout << "help" << endl << "call number is " << m_number << endl;
}