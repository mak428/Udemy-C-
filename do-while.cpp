#include <iostream>
using namespace std;

int main()
{
     const string password = "Teddy";

     cout << "Enter your password" << endl;

     string input;
     cin >> input;
     
     do
     {
          cout << "Enter your password" << endl;
          cin >> input;

          if(input != password)
          {
               cout << "Access denied" << endl;
          }

     }while(input != password);
     
     
 
     cout << "Password accepted" << endl;

     return 0;
}
