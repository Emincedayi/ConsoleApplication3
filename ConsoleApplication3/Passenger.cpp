
#include <string>
#include <iostream>
#include "Passenger.h"
using namespace std;


int Passenger::numberOfPassenger = 0;
double Passenger::averageValue = 0;
Passenger::Passenger(string name, int age, string status, string destination, int weight)
{
	setPassengerName(name);
	setPassengerAge(age);
	setPassengerStatus(status);
	setPassengerDestination(destination);
	setPassengerWeight(weight);
	calculatePassengerValue();
	numberOfPassenger++;
	averageValue = (averageValue * (numberOfPassenger - 1) + passengerValue) / numberOfPassenger;
	cout << "Reservation owner is " << passengerName << endl;
}

Passenger::~Passenger()
{
	cout << "Passenger " << passengerName << "'s problem comleted without problem" << endl;
}

void Passenger::displayAllData()
{
	cout << "Passenger name: " << getPassengerName() << endl;
	cout << "Passenger age: " << getPassengerAge() << endl;
	cout << "Passenger status " << getPassengerStatus() << endl;
	cout << "Passenger destination " << getPassengerDestination() << endl;
	cout << "Passenger weight " << getPassengerWeight() << endl;
	cout << "Passenger value " << getPassengerValue() << endl;
}

void Passenger::setPassengerName(string name)
{
	passengerName = name;
}

void Passenger::setPassengerAge(int age)
{
	passengerAge = age;
}

void Passenger::setPassengerStatus(string status)
{
	passengerStatus = status;
}

void Passenger::setPassengerDestination(string destination)
{
	passengerDestination = destination;
}
void Passenger::setPassengerWeight(int weight)
{
	passengerWeight = weight;
}

void Passenger::calculatePassengerValue()
{
	int value = 0;

	if (passengerDestination == "Istanbul")
	{
		value += 2;
	}
	else if (passengerDestination == "Ankara")
	{
		value += 4;
	}
	else if (passengerDestination == "Kars")
	{
		value += 4;
	}
	else if (passengerDestination == "Gaziantep")
	{
		value += 1;
	}
	if (passengerStatus == "FirstClass")
	{
		value += 20;
	}
	else if (passengerStatus == "Business")
	{
		value += 15;
	}
	else	if (passengerStatus == "Economy")
	{
		value += 5;
	}


	if (passengerAge < 18)
	{
		value += 1;
	}
	else if (passengerAge < 30)
	{
		value += 3;
	}
	else	if (passengerAge < 60)
	{
		value += 5;
	}
	if (passengerWeight > 130)
	{
		value -= 20;
	}
	else if (passengerWeight > 100)
	{
		value -= 15;
	}
	else	if (passengerWeight > 75)
	{
		value += 5;
	}


	passengerValue = value;
}

string Passenger::getPassengerName() const
{
	return passengerName;
}

int Passenger::getPassengerAge() const
{
	return passengerAge;
}

string Passenger::getPassengerDestination() const
{
	return passengerDestination;
}

string Passenger::getPassengerStatus() const
{
	return passengerStatus;
}

int Passenger::getPassengerWeight() const
{
	return passengerWeight;
}


int Passenger::getPassengerValue() const
{
	return passengerValue;
}


ostream& operator<<(ostream& output, Passenger& myPassenger)
{
	output << "Player Name: " << myPassenger.passengerName << endl;
	cout << "Age: " << myPassenger.passengerAge << endl;
	cout << "Status: " << myPassenger.passengerStatus << endl;
	cout << "Weight: " << myPassenger.passengerWeight << endl;

	cout << "Value: " << myPassenger.passengerValue;

	return output;
}


Passenger& Passenger::operator++()
{
	averageValue = (averageValue * numberOfPassenger + 5) / numberOfPassenger;
	passengerValue += 5;
	return *this;
}

Passenger& Passenger::operator--()
{
	cout << "Operatar overloading --" << endl;
	return *this;
}

Passenger& Passenger::operator+=(int number)
{
	averageValue = (averageValue * numberOfPassenger + number) / numberOfPassenger;
	passengerValue = passengerValue + number;
	return *this;
}

int Passenger::getNumberOfPassenger()
{

	return numberOfPassenger;
}
double Passenger::getAverageValue()
{
	return averageValue;
}
