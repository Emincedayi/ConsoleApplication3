#include <string>
using namespace std;

#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger
{

public:
    explicit Passenger(string name, int age, string status, string destination, int weight);
    ~Passenger();
    void displayAllData();
    Passenger& operator++();
    Passenger& operator--();
    Passenger& operator+=(int number);
    static int getNumberOfPassenger();
    static double getAverageValue();
private:
    friend ostream& operator<<(ostream& output, Passenger& myPassenger);
    string passengerName;
    int passengerAge;
    int passengerWeight;
    string passengerStatus;
    string passengerDestination;
    int passengerValue;
    static int numberOfPassenger;
    static double averageValue;
    void setPassengerWeight(int weight);
    void setPassengerName(string name);
    void setPassengerAge(int age);

    void setPassengerStatus(string status);
    void setPassengerDestination(string destination);
    void calculatePassengerValue();
    string getPassengerName() const;
    int getPassengerAge() const;
    int getPassengerWeight() const;
    string getPassengerStatus() const;
    string getPassengerDestination() const;
    int getPassengerValue() const;
};


#endif

