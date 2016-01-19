/*
 * SillyAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: tgae6529
 */

#include "SillyAppController.h"
#include <iostream>

using namespace std;

SillyAppController :: SillyAppController() {

	this->count = 99;

}

void SillyAppController :: setCount(int count) {

	this->count = count;

}

int SillyAppController :: getCount() {

	return this->count;

}

void SillyAppController :: start() {

	cout << "Hi, I'm a computer." << endl;
	cout << getCount() << " is the count" << endl;
	cout << "Type in a new value for cout please" << endl;
	int tempCount;
	cin >> tempCount;
	setCount(tempCount);
	cout << getCount() << " is the count" << endl;
}



