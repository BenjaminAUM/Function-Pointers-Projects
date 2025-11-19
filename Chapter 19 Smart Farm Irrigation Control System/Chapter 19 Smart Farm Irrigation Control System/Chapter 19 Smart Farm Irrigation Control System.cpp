// Chapter 19 Smart Farm Irrigation Control System
#include <iostream>
using namespace std;

void control_irrigation(int* moisture, int sunlight, int hours_since_irrigation, int* water_limit);

int main()
{
	int soil_moisture = 35;
	int sun_intensity = 75;
	int hours_passed = 9;
	int daily_water_limit = 100;

	control_irrigation(&soil_moisture, sun_intensity, hours_passed, &daily_water_limit);

	cout << "Updated Soil moisture: " << soil_moisture << endl;
	cout << "Updated Water limit: " << daily_water_limit << endl;
	return 0;
}

void control_irrigation(int* moisture, int sunlight, int hours_since_irrigation, int* water_limit)
{
	if (*moisture < 25 && sunlight > 70 && hours_since_irrigation > 8)
	{
		*moisture = *moisture + (*moisture * 0.25);
		*water_limit = *water_limit - 20;
		cout << "Emergency irrigation activated." << endl;
	}
	else if (*moisture >= 25 && *moisture <= 40 && sunlight > 50)
	{
		*moisture = *moisture + (*moisture * 0.15);
		*water_limit = *water_limit - 10;
	}
	else if (*moisture >= 40 && *moisture <= 60)
	{
		*moisture = *moisture + (*moisture * 0.05);
		*water_limit = *water_limit - 5;
	}
	else if (*moisture > 60 && sunlight < 40)
	{
		cout << "Evaporation is low" << endl;
		*moisture = *moisture - (*moisture * 0.10);
	}
	else if (*moisture > 80)
	{
		*moisture = 80;
		cout << "Warning: Over-watering prevented." << endl;
	}
	else if (*water_limit < 20)
	{
		cout << "Water limit too low, irrigation skipped." << endl;
	}
}