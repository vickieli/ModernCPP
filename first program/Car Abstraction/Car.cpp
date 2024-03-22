#include "Car.h"
#include <iostream>
using namespace std;
int Car::totalcount = 0;

Car::Car():Car(0)
{
	cout << "Car()" << endl;

}
Car::Car(float amount):Car(amount,0)
{
	cout << "Car(float)" << endl;
}

Car::Car(float amount, int pass)
{
	cout << "Car(float,int)" << endl;

	++totalcount;
	fuel = amount;
	speed = 0;
	passengers = pass;
}
Car::~Car()
{
	--totalcount;
	cout << "~Car" << endl;
}

void Car::FillFuel(float amount)
{
	fuel = amount;
}

void Car::Accelerate()
{
	speed++;
	fuel -= 0.5f;
}

void Car::Break()
{
	speed = 0;

}

void Car::AddPassengers(int count)
{
	passengers = count;
}

void Car::Dashboard()
{
	cout << "Fuel:" << fuel << endl;
	cout << "Speed:" << speed << endl;
	cout << "Passengers:" << passengers << endl;
}

void Car::ShowCount()
{
	cout << "TotalCount:" << totalcount << endl;

}

