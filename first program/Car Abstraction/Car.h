#pragma once
class Car
{
private:
	float fuel;
	float speed;
	int passengers;
	static int totalcount;
public:
	Car();
	Car(float amount);
	Car(float amount, int pass);
	void FillFuel(float amount);
	void Accelerate();
	void Break();
	void AddPassengers(int count);
	void Dashboard();
	static void ShowCount();
	~ Car();

};