#include <iostream>
using namespace std;  
int main() {
 char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;
    switch (grade) {
    case 'A':
    case 'a':
        cout << "Excellent performance!" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Very Good performance!" << endl;
        break;
    case 'C':
    case 'c':
        cout << "Good performance!" << endl;
        break;
    case 'D':
    case 'd':
        cout << "You passed." << endl;
        break;
    case 'F':
    case 'f':
        cout << "Fail. Better luck next time." << endl;
        break;
    default:
        cout << "Please enter grade from A to D or F" << endl;
    }   
}