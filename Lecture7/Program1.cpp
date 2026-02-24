#include <iostream>
using namespace std;  
int main() {
    int attempts = 5;
    char secret = 'z';
    char guess;
    cout << "Guess the character between a-z " << endl << "You have 5 chances.\n " << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "attempt " << i << ":";
        cin >> guess;
        if (guess == secret) {
            cout << "Congratulate! you guessed correctly." << endl;
            break;
        }
        else {
            cout << "Wrong guess. Try again .\n" << endl;
        }
        if (i >= 5 && guess != secret) {
            cout << "sorry! you used all 5 chances. The correct character is " << secret << endl;
        }
    }
}
