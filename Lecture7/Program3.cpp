#include <iostream>
using namespace std;
int main() {
	int num, square;
		int newSquar = 0;	
	cout << "Enter number ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		square = i * i;
		newSquar = newSquar + square;
		//we can write both above two lines  as sum+=i*i ;
	}
	cout <<"the sum of first "<< num << " square is "<<newSquar << endl;

}
