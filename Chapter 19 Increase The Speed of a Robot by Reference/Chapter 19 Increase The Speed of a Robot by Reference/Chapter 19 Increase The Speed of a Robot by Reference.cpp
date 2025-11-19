// Chapter 19 Increase The Speed of a Robot by Reference
#include <iostream>
using namespace std;

void boost_speed(int* speed);

int main()
{
	int robot_speed;

	cout << "how fast is the robot going? ";
	cin >> robot_speed;

	boost_speed(&robot_speed);

	cout << "Robot's speed is " << robot_speed << endl;
	return 0;
}


void boost_speed(int* speed)
{
	if (*speed < 40)
	{
		cout << "Speed is too slow, increase by 20" << endl;
		*speed = *speed + 20;
	}
	else
	{
		cout << "Speed is fast enough" << endl;
	}
}