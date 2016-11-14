// SinusFunctieSimple.cpp

#include "SinusFunctieSimple.h"

SinusFunctieSimple::SinusFunctieSimple()
{
	isCorrect = true;
	seconds = time(&seconds);
	randomizeValues();
	printFunction();
	getInputFromUser();
	calculateFunction();

	if (DEBUG)
	{
		testFunction();
	}
}

void SinusFunctieSimple::randomizeValues()
{
	srand((unsigned int)seconds);
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

void SinusFunctieSimple::calculateFunction()
{
	if (antwoordAmplitude != amplitude)
	{
		cout << "De amplitude is niet juist!" << endl;
		cout << "De juiste amplitude is " << amplitude << " , maar jij geeft als antwoord " << antwoordAmplitude << "!" << endl;
		isCorrect = false;
	}

	if (antwoordPeriode != periode)
	{
		cout << "De periode is niet juist!" << endl;
		cout << "De juiste periode is " << periode << " , maar jij geeft als antwoord " << antwoordPeriode << "!" << endl;
		isCorrect = false;
	}

	if (antwoordC != c)
	{
		cout << "De waarde voor c is niet juist!" << endl;
		cout << "De juiste waarde is " << c << " , maar jij geeft als antwoord " << antwoordC << "!" << endl;
		isCorrect = false;
	}

	if (antwoordD != d)
	{
		cout << "De waarde voor d is niet juist!" << endl;
		cout << "De juiste waarde is " << d << " , maar jij geeft als antwoord " << antwoordD << "!" << endl;
		isCorrect = false;
	}

	if (isCorrect)
	{
		cout << "Proficiat! Je hebt de funcie correct opgelost!" << endl;
	}
	else
	{
		cout << "Spijtig, maar je hebt de functie niet correct opgelost..." << endl;
	}
}

void SinusFunctieSimple::testFunction()
{
	cout << antwoordAmplitude << endl;
	cout << antwoordPeriode << endl;
	cout << antwoordC << endl;
	cout << antwoordD << endl;
}
