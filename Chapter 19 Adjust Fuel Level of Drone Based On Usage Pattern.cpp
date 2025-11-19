// Chapter 19 Adjust Fuel Level of A Drone Based On Usage Pattern
#include <iostream>
using namespace std;

void update_fuel(int* fuel, int wind_speed);

int main()
{
	int drone_fuel = 100;
	int wind_speed;

	cout << "Current wind speed? ";
	cin >> wind_speed;

	update_fuel(&drone_fuel, wind_speed);

	cout << "Remaining Fuel = " << drone_fuel << endl;
	return 0;
}

void update_fuel(int* fuel, int wind_speed)
{
	if (wind_speed < 20)              //checks if user input is less than 20
	{
		*fuel = *fuel - (*fuel * 0.05);
	}
	else if (wind_speed >= 20 && wind_speed <= 40)   //checks if user input is between 20 and 40
	{
		*fuel = *fuel - (*fuel * 0.10);
	}
	else                                  //defaults if user input is greater than 40
	{
		*fuel = *fuel - (*fuel * 0.15);
	}
}