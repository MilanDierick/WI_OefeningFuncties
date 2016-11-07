#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
#include <sstream>

#include "SinusFunctieSimple.h"

using namespace std;

void randomizeValues(int * a, int * b, int * c, int * d);

int main()
{
	SinusFunctieSimple functie = SinusFunctieSimple();
	functie.printFunction();

	cin.get();
	return 0;
}
