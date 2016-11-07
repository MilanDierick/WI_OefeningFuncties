// SinusFunctieSimple.cpp

#include "SinusFunctieSimple.h"

SinusFunctieSimple::SinusFunctieSimple()
{
	seconds = time(&seconds);
	srand((unsigned int)seconds);
	randomizeValues();
}

void SinusFunctieSimple::randomizeValues()
{
	a = rand() % 10;
	b = rand() % 10;
	c = rand() % 10;
	d = rand() % 10;
}

void SinusFunctieSimple::printFunction()
{
	ostringstream output;
	string outputString;

	output << "y = " << a << "sin(" << b << "x " << "- " << c << ") + " << d << endl;

	outputString = output.str();
	cout << outputString;
}
