#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;
 
class Dice
{
public: 
	int sides;
	int ssides;
private:
	int getSides()
	{
		return sides;
	}
	

public:
	Dice(int sides)
	{
		ssides = rand() % 6 + 1;
	}
	int roll()
	{
		return roll();
	}
	int getRolls()
	{
		for (int i=0;i>)
		{
			return i++;
		}

	}
	
};
