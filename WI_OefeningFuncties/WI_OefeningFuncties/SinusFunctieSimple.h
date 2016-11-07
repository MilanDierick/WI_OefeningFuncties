// SinusFunctieSimple.h

#ifndef SinusFunctieSimple_H
#define SinusFunctieSimple_H

#include <time.h>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class SinusFunctieSimple
{
	time_t seconds;
	int a, b, c, d, e;

public:
	SinusFunctieSimple();
	void randomizeValues();
	void printFunction();
};


#endif

