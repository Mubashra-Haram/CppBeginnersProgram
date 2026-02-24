#include <iostream>
using namespace std;
int main()
{
	double salary, deduction, netSalary;
	cout << " Enter your salary ";
	cin >> salary;
	switch ((int)(salary / 10000))
	{
	case 0:
		deduction = 0;
		netSalary = salary;
		cout << " So the netSalary is " << netSalary;
		break;
	case 1:
		deduction = 1000;
		netSalary = salary - deduction;
		cout << " So the netSalary after 1000 rupees deduction for fund is " << netSalary;

		break;
	default:
		deduction = salary * 7 / 100;
		netSalary = salary - deduction;
		cout << " So the netSalary after 7% deduction for fund is " << netSalary;
	}
}
