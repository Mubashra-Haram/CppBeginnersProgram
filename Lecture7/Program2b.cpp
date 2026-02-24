#include <iostream>
using namespace std;  
int main() {
	int table,maxlength;
	cout << "enter a number for table ";
	cin >> table;
	cout << "enter max length of table ";
	cin >> maxlength;
	for (int i = 1; i <= maxlength; i++) {
		cout << table <<" x " << i << " = " << table * i << endl;
	}
}