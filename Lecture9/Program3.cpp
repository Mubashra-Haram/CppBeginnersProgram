#include <iostream>
using namespace std;
bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isEven(number))
        cout << number << " is Even." << endl;
    else
        cout << number << " is Odd." << endl;
    return 0;
}