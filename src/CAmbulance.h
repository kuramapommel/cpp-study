//
// Created by admin on 2017/03/20.
//

#ifndef STUDY_AMBULANCE_H
#define STUDY_AMBULANCE_H

#include "car.h"

class CAmbulance : public CCar {
public:
	CAmbulance();

	virtual ~CAmbulance();

	void showNumber();

private:
	int m_number;
};

#endif //STUDY_AMBULANCE_H
