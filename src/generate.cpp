//============================================================================
/*
 * calc.cpp
 *
 *  Created on: 15 Kas 2018
 *      Author: eokumuh
 */
//============================================================================
#include <iostream>

using namespace std;
//============================================================================
void in_generator(int *s, size_t size)
{
	cout << "Generating Inputs .." << endl;
	for (size_t i = 0; i < size; i++) {
		s[i] = i;
	}
}
//============================================================================
void out_generator(int *s, int *sq, size_t size)
{
	cout << "Generating Outputs .." << endl;

	for (size_t i = 0; i < size; i++) {
		sq[i] = s[i] * s[i] + 5;
	}
}
//============================================================================

