//============================================================================
/*
 * display.cpp
 *
 *  Created on: 15 Kas 2018
 *      Author: eokumuh
 */
//============================================================================
#include <iostream>

using namespace std;
//============================================================================
void diplay_array(int *ptr, size_t size)
{
	for (int i = 0; i < size; i++) {
		cout << ptr[i] << endl;
	}
}
//============================================================================
