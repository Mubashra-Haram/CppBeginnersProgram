#include <iostream>
using namespace std;
int main() {
    int num;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        for (int i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }
}