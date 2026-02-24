#include <iostream>
using namespace std;
int age, total_age, average_Age ;
int main() {
   for (int std = 1; std <= 10; std++) {

       cout <<"Enter the age of Student"<< std << "\n";
       cin >> age;
       total_age += age;
       average_Age = total_age / 10;
  }
   cout << "Average Age of Ten Students are tsss "<<average_Age;
   cout << "Average Age of all students is working perfecrly ";
}
