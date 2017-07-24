#include <iostream>
using namespace std;

int f (int x)
{
	return (x*x)+2;
}

int g (int x)
{
	return (x*x)-2;
}

int max (int x, int y)
{
	int tempMax = 0;
	if (x >= tempMax)
	{
		tempMax = x;
	}
	else
	{
		tempMax = tempMax; //this is redundant
	}

	if (y >= tempMax)
	{
		tempMax = y;
	}
	else
	{
		tempMax = tempMax; // this is also redundant
	}

	return tempMax;

}

int min (int x, int y)
{
	int tempMin = x;
	if (x <= tempMin)
	{
		tempMin = x;
	}
	else
	{
		tempMin = tempMin; //this is redundant
	}

	if (y <= tempMin)
	{
		tempMin = y;
	}
	else
	{
		tempMin = tempMin; // this is also redundant
	}

	return tempMin;

}


int main() 
{
	int numberBears = 15;
	int numberBeavers = 17;
	int numberRats = 25;
	int numberBats = 11;
	
	cout << "Number of bears: " << numberBears << endl;
	cout << "Number of beavers: " << numberBeavers << endl;
	cout << "Number of rats: " << numberRats << endl;
	cout << "Number of bats: " << numberBats << endl;

	cout << "There are " << numberBears + numberBeavers + numberRats + numberBats << " students at Rodent Elementary School" << endl;
	cout << "There are " << numberBears - numberBats << " more bears than bats." << endl;

	if (g(f(1)) == f(g(1)))
	{
		cout << "f and g commute" << endl;
	}

	else
	{
	        cout << "f and g don't commute" << endl;
	}
	
	int mostAnimals = max(numberBears, numberBeavers);
	mostAnimals = max(mostAnimals, numberRats);
	mostAnimals = max(mostAnimals, numberBats);

	cout << "The dominant number of animals among all species is " << mostAnimals << endl;

	int leastAnimals = min(numberBears, numberBeavers);
	leastAnimals = min(leastAnimals, numberRats);
	leastAnimals = min(leastAnimals, numberBats);

	cout << "The fewest number of animals among all species is " << leastAnimals << endl;
	
	return 0;

}
