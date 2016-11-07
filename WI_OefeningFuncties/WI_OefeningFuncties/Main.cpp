#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void randomizeValues(int * a, int * b, int * c, int * d);

int main()
{
	time_t seconds;
	time(&seconds);
	srand((unsigned int)seconds);

	int a, b, c, d;

	cout << "Een sinusfunctie heeft de volgende notatie (in symolen): y = a sin(bx - c) + d" << endl;
	cout << "Het programma gaat nu enkele toevallige functies weergeven." << endl;

	for (int i = 0; i < 4; i++)
	{
		randomizeValues(&a, &b, &c, &d);
		cout << "y = " << a << " sin(" << b << "x - " << c << ") + " << d << endl;
	}

	cin.get();
	return 0;
}

void randomizeValues(int * a, int * b, int * c, int * d)
{
	*a = rand() % 10 + 1;
	*b = rand() % 10 + 1;
	*c = rand() % 10 + 1;
	*d = rand() % 10 + 1;
}
