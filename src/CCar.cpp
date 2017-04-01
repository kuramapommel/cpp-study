//
// Created by admin on 2017/03/20.
//
#include "CCar.h"
#include <iostream>

using namespace std;

CCar::CCar() : m_fuel(0), m_migration(0) {
	cout << "CCer object is created!" << endl;
}

CCar::~CCar() {
	cout << "CCer object is deleted!" << endl;
}

void CCar::move() {
	if (m_fuel >= 0) {
		m_migration++;
		m_fuel--;
	}

	showDistance();
	showFuel();
}

void CCar::supply(int fuel) {
	if (fuel > 0) {
		m_fuel += fuel;
	}
	showFuel();
}

void CCar::showDistance() {
	cout << "distance : " << m_migration << endl;
}

void CCar::showFuel() {
	cout << "fuel : " << m_fuel << endl;
}