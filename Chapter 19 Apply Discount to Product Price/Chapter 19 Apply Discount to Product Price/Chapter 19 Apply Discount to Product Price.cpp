// Chapter 19 Apply Discount to Product Price
#include <iostream>
using namespace std;

void apply_discount(double* price);

int main()
{
	double product_price = 450.0;

	apply_discount(&product_price);

	cout << "Final price after discount: " << product_price << endl;
	return 0;
}

void apply_discount(double* price)
{
	cout << "Original price: " << *price << endl;
	*price = *price - (*price * 0.10);
}