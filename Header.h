#ifndef Header_h
#define Header_h

#include <iostream>
#include <string>
using namespace std;

void getFirstandLastName(string fullName, string& firstName, string& lastName) {
	int len = fullName.length();
	bool spaceFound = false;

	for (int i = 0; i < len; i++) {
		if (fullName[i] != ' ' && !spaceFound) { // store characters prior to space into first name
			firstName += fullName[i];
		} else if(fullName[i] == ' ') {
			spaceFound = true; //marked that we found space
		}
		else if (spaceFound) {
			lastName += fullName[i]; // add remaing chararacters to last name
		}

	}
}

#endif
