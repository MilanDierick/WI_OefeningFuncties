// SinusFunctieSimple.h 

#ifndef SinusFunctieSimple_H
#define SinusFunctieSimple_H
#define DEBUG 0

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
	bool isCorrect;
	
public:
	SinusFunctieSimple();
	void randomizeValues();
	void getInputFromUser();
	void printFunction();
	void calculateFunction();
	void testFunction();
};


#endif

