#include <iostream>
#include <limits>
#include <cstdint>
using namespace std;

int main()
{
	int value = 5456;
	cout << value << endl;

	cout << "Max int value: " << 		       numeric_limits<int>::max() << endl;
	cout << "Min int value: " << numeric_limits<int>::min() << endl;

	long int lValue = 2345325345345;
	cout << lValue << endl;
	
	short int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;
	
	unsigned int uValue = 2432434;
	cout << uValue << endl;

	return 0;

}
