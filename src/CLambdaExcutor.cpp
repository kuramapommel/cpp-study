//
// Created by admin on 2017/04/02.
//
#include "CLambdaExcutor.h"
#include <iostream>

using namespace std;

const int CONST_VAL = 100;

void CLambdaExcutor::excute(int inputVal) {

	int valA = inputVal;
	// copy
	auto lambdaA = [=](int a) -> int{
		// valA is read-only
		return valA + a;
	};
	int resultA = lambdaA(CONST_VAL);

	int valB= inputVal;
	// reference
	auto lambdaB = [&](int a) -> int{
		valB += a;
		return valB;
	};
	int resultB = lambdaB(CONST_VAL);

	cout << "valA is " << valA << endl;
	cout << "resultA is " << resultA << endl;

	cout << "valB is " << valB << endl;
	cout << "resultB is " << resultB << endl;
}

