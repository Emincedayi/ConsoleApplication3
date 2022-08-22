#include <iostream>
#include <string>
#include "Passenger.h"
using namespace std;


int main()
{
	int response;
	cout << "Please enter increment of value: ";
	cin >> response;
	Passenger passenger1("Emin", 20, "FirstClass", "Istanbul", 78);
	Passenger passenger2("Emre", 32, "Business", "Ankara", 94);
	Passenger passenger3("Mustafa", 26, "Economy", "Kars", 84);
	Passenger passenger4("Mehmet", 20, "FirstClass", "Gaziantep", 71);
	cout << passenger1 << endl;
	cout << "**" << endl;
	cout << passenger2 << endl;
	cout << "**" << endl;
	cout << passenger3 << endl;
	cout << "**" << endl;
	cout << passenger4 << endl;
	cout << "**" << endl;
	cout << Passenger::getAverageValue();
	passenger1 += response;
	cout << "**" << endl;
	cout << Passenger::getAverageValue();
	cout << "**" << endl;
}
