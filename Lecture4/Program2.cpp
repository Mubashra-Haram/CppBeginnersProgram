#include <iostream>
using namespace std;
int main()
{
   int num;
   cout << "Enter a four digit integer: ";
   cin >> num;
   if (num < 1000 || num > 9999)
   {
       cout << "Please enter exactly a four digit number.";
       return 0;
   }
   int digit;
   while (num != 0)
   {
       digit = num % 10;
       cout << digit << endl;
       num = num / 10;
   }
}
