//This program takes two arrays of 5 integers from user
//displays them and after comparing them displays the result 
#include <iostream>
using namespace std;
int main() {
	int num1[5], num2[5], i;
	cout << "Please Enter five integers for the first array"<<endl;
	for (i = 0; i <=4; i++) {
		cin >> num1[i];
	}
	cout << "Please Enter five integers for the first array" << endl;
	for (i = 0; i <=4; i++) {
		cin >> num2[i];
	}
	bool equals = true;
	for (int i = 0; i <= 4; i++) {
		if (num1[i] != num2[i]) {
			cout << "Arrys are not equall";
			equals = false;
			break;
		} 
		equals = true;	
	}
	if (equals) {
		cout << "Arrays are equall";
	}}