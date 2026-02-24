#include <iostream>
using namespace std;  
long long pow(int num, int powerlimit) {	
	int result = 1;	
	for (int i = 1; i <= powerlimit; i++) {
		result *= num;
	}
return result;
} 
int main() {
	int num, powerlimit;
	cout << "Please enter the number to calculate the square ";
	cin >> num;
	cout << "Enter power limit ";
	cin >> powerlimit;
	cout << num << " raise to the power " << powerlimit << " is " << pow(num,powerlimit);

	
}