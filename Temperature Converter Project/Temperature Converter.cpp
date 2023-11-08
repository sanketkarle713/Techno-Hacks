#include<iostream>
using namespace std;

int main()
{
   float fahr, cel;
   char option; 
   
   cout << "\n\n\t\t\t** TEMPERATURE CONVERTER Using C++ ** \n\n";

   cout << "Choose from following option:" << endl;
   cout << "1. Celsius to Fahrenheit." << endl;
   cout << "2. Fahrenheit to Celsius." << endl;
   cin >> option;
   
   cout << "\n";

   //option for converting celsius into fahernheit
   if (option == '1')
   {
      cout << "Enter the temperature in Celsius: ";
      cin >> cel;

      fahr = (1.8 * cel) + 32.0; //temperature conversion formula
      cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" << endl;
   }
   //option for converting Fahrenheit into Celsius
   else if (option == '2')
   {
      cout << "Enter the temperature in Fahrenheit: ";
      cin >> fahr;

      cel = (fahr - 32) / 1.8; //temperature conversion formula
      cout << "\nTemperature in degree Celsius: " << cel << " C" << endl;
   }
   else
      cout << "Error Wrong Input." << endl;

   return 0;
}
