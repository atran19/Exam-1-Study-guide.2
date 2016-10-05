#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	Dice d(6);
	cout << d.roll() << endl;
	{
		cout << "error in getSides.It should be 6" << endl;
		return 0;
	}
	bool passed = true;
	for (int i = 0; i < 100; i++)
	{
		int x = d.roll();
		if (x < 1 || x>6)
		{
			cout << "Error, roll returned " << x << endl;
			passed = false;
			break;
		}
	}
	if (passed)
		cout << "Passed roll test" << endl;
	cout << d.getRolls() << endl;
}

