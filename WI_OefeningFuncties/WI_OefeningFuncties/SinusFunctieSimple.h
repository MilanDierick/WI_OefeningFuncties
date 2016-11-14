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
	int amplitude, periode, c, d;
	int antwoordAmplitude, antwoordPeriode, antwoordC, antwoordD;
	bool isEnabled;
	
public:
	SinusFunctieSimple();
	void randomizeValues();
	void getInputFromUser();
	void printFunction();
	void testFunction();
};


#endif

