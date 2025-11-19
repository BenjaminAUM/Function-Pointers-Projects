// Chapter 19 Swap The Values of Two Items
#include <iostream>
using namespace std;

void swap_x_and_y(int* first_number, int* second_number);

int main()
{
	int first_number = 10, second_number = 20;

	swap_x_and_y(&first_number, &second_number);

	cout << "First number = " << first_number << " Second number = " << second_number << endl;
	return 0;
}

void swap_x_and_y(int* first_number, int* second_number)
{
	*first_number = 20;
	*second_number = 10;

	cout << "First number and Second number swapped" << endl;
}