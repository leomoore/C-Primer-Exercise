#include <iostream>
#include "Sales_data.h"

int main()
{
	using namespace std;
	Sales_data book[2];
	std::cin >> book[0].isdn >> book[0].sales_num >> book[0].units_sold;
	std::cin >> book[1].isdn >> book[1].sales_num >> book[1].units_sold;
	for (int i = 0; i <= 1; ++i)
		book[i].income = book[i].sales_num*book[i].units_sold;
	double income1=0, income2=0;
	if (book[0].isdn == book[1].isdn)
		income1 = book[0].income + book[1].income;
	else
	{
		income1 = book[0].income;
		income2 = book[1].income;
	}
	std::cout << income1
		<< std::endl
		<< income2
		<< std::endl;
	cin.get();
	cin.get();
	

}


