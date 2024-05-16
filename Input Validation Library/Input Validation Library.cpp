#include <iostream>
using namespace std;
#include "clsInputValidate.h"
int main()
{


	cout << clsInputValidate::IsNumberBetween(62, 1, 10) << endl;
	cout << clsInputValidate::IsNumberBetween(6.2, 1.1, 10.3) << endl;
	cout << clsInputValidate::IsNumberBetween(626666, 16666666, 106666666) << endl;
	cout << clsInputValidate::IsNumberBetween("6", "1", "10") << endl;

	cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(1, 1, 2000), clsDate(2, 2, 2030)) << endl;

	int x = clsInputValidate::ReadIntNumberBetween(5, 10, "Invalid Number! enter again...");
	cout << x << endl;

	cout << clsInputValidate::IsValidDate(clsDate(33, 3, 2000));






	system("pause>0");
	return 0;
}

