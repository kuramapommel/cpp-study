#include <iostream>
#include "src/CSample.h"
#include "src/car.h"
#include "src/CAmbulance.h"

using namespace std;

int main() {

	CSample sample;
	int num;

	cout << "please input number : " << endl;
	cin >> num;

	sample.setNum(num);
	cout << "input number is " << sample.getNum() << endl;

	CCar *car = 0;

	car = new CCar();
	car->supply(sample.getNum());
	car->move();
	car->move();

	delete car;

	int *array = 0;
	int index;

	array = new int[5];

	for (index = 0; index < 5; ++index) {
		array[index] = index;
		cout << "element is " << array[index] << endl;
	}

	delete[] array;

	CAmbulance ambulance;
	ambulance.supply(sample.getNum());
	ambulance.move();
	ambulance.showNumber();

	return 0;
}