//
// Created by admin on 2017/03/20.
//

#ifndef STUDY_CAR_H
#define STUDY_CAR_H

class CCar {
public:
	// constructor
	CCar();

	// destructor
	virtual ~CCar();

	void move();

	void supply(int fuel);

private:

	void showDistance();

	void showFuel();

	int m_fuel;
	int m_migration;
};

#endif //STUDY_CAR_H
