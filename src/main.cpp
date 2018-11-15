//============================================================================
// Name        : hello.cpp
// Author      : Fatih
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "display.h"
#include "generate.h"

using namespace std;
//============================================================================
int main()
{
	int s[10];
	int sq[10];

	in_generator(s, 10);	/* Inputs Generation.	*/
	diplay_array(s, 10);	/* Inputs Display.		*/
	out_generator(s, sq, 10);	/* Outputs Generation.	*/
	diplay_array(sq, 10);	/* Outputs Display.		*/

	return 0;
}
//============================================================================
