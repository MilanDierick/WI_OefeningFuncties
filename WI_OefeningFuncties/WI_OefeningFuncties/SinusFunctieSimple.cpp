// SinusFunctieSimple.cpp

#include "SinusFunctieSimple.h"

SinusFunctieSimple::SinusFunctieSimple()
{
	isEnabled = false;
	seconds = time(&seconds);
	srand((unsigned int)seconds);
	randomizeValues();
	getInputFromUser();
	testFunction();
}

void SinusFunctieSimple::randomizeValues()
{
	amplitude = rand() % 10;
	periode = rand() % 10;
	c = rand() % 10;
	d = rand() % 10;
}

void SinusFunctieSimple::getInputFromUser()
{
	cout << "Geef de amplitude van functie : ";
	cin >> antwoordAmplitude;
	cout << "Geef de periode van de functie : ";
	cin >> antwoordPeriode;
	cout << "Geef de waarde voor c van de functie : ";
	cin >> antwoordC;
	cout << "Geef de waarde voor d van de functie : ";
	cin >> antwoordD;
}

void SinusFunctieSimple::printFunction()
{
	ostringstream output;
	string outputString;

	output << "y = " << amplitude << "sin(" << periode << "x " << "- " << c << ") + " << d << endl;

	outputString = output.str();
	cout << outputString;
}

void SinusFunctieSimple::testFunction()
{
	cout << antwoordAmplitude << endl;
	cout << antwoordPeriode << endl;
	cout << antwoordC << endl;
	cout << antwoordD << endl;
}
