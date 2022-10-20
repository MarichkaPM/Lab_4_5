#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0
			&& x >= -1 && x <= 5 && y >= -3 && y <= 5)
			|| (y >= (x - 2) * (x - 2) - 3 && y <= -x
			&& x >= -1 && x <= 5 && y >= -3 && y <= 5))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	cout << "----------------------------" << endl;
	cout << "| " << setw(6) << " x " << setw(4) << " |" 
		<< setw(6) << " y " << setw(4)
		<< "|" << setw(6) << " |" << endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;

		if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0
			&& x >= -1 && x <= 5 && y >= -3 && y <= 5)
			|| (y >= (x - 2) * (x - 2) - 3 && y <= -x
			&& x >= -1 && x <= 5 && y >= -3 && y <= 5))
			cout << "| " << setw(8) << setprecision(4) << x << " |"
			<< setw(8) << setprecision(4) << y << " | " << setw(2) 
			<< "yes" << setw(2) << " |" << endl;
		else
			cout << "| " << setw(8) << setprecision(4) << x << " |"
			<< setw(8) << setprecision(4) << y << " |" << setw(4) 
			<< "no" << setw(2) << " |" << endl;
	}
	cout << "----------------------------" << endl;

	return 0;
}