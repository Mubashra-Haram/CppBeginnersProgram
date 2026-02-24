#include <iostream>
using namespace std;
void square(double*);
int main()
{
       double x;
       x = 123.456;
       cout << "\nIn main(), before calling square(), x = " << x;
       square(&x);  
       cout << "\nIn main(), after calling square(), x = " << x;
       cout << "\n The current valus of num is " << x;
       return 0;
   }
   void square(double* x)  
   {
       *x = (*x) * (*x); 
   }