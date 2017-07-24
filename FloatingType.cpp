#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     float fValue = 76.4;	

     cout << sizeof(float) << endl;
     cout << setprecision(20) << fixed << fValue << endl;
 
     double dValue = 76.4;
     cout << setprecision(20) << fixed << fValue << endl;

     long double lValue = 123.456789876543210;
     cout << setprecision(20) << fixed << lValue << endl;
     cout << "Size of long double: " << sizeof(lValue) << endl;

     return 0;
}
