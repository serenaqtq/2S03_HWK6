/*
 * Addition.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: Polly
 */

#include "Addition.h"
#include <iostream>
using namespace std;
int output=0;

Addition:: Addition() {

}

Addition:: ~Addition(){

}

string Addition::evalute(){
	int output = left + right;
	return output;
}

void Addition:: print(){
	cout << ")" << left << "+" << right << ")" <<output;
}



