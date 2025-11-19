// Chapter 19 Update a Student's Marks
#include <iostream>
using namespace std;

void update_marks(int* marks);

int main()
{
	int student_marks = 72;
	
	update_marks(&student_marks);

	cout << "Update marks = " << student_marks << endl;    //outputs updated marks
	return 0;
}

void update_marks(int* marks)
{
	cout << "Marks = " << *marks << endl;       //outputs original marks
	*marks = *marks + 5;                        //Updates original marks by + 5
}