#include <iostream>
using namespace std;
int main() {
	int end, start ;
	int sum = 0;
	cout << "enter start limit ";
	cin >> start;
	cout << "enter end limit ";
	cin >> end;
	
	for (int i = start; i <= end; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}
	cout << "sum of even number in the range of "<<end<<" is " << sum;
}