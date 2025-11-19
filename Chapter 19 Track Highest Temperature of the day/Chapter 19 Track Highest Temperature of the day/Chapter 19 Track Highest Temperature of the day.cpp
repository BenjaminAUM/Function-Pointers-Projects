// Chapter 19 Track Highest Temperature of the day
#include <iostream>
using namespace std;

void update_highest(int* highest, int new_reading);

int main()
{
	int highest_temp = 32;
	int new_user_temp;
	
	cout << "Enter a new temp: ";
	cin >> new_user_temp;

	update_highest(&highest_temp, new_user_temp);

	cout << "new highest temp: " << highest_temp << endl;
	return 0;
}

void update_highest(int* highest, int new_reading)
{
	if (new_reading > *highest)         //checks if user inputed temp is higher then highest temp
	{
		cout << "Current highest temp: " << *highest << endl;
		*highest = new_reading;
	}
	else
	{
		//do nothing
	}
}