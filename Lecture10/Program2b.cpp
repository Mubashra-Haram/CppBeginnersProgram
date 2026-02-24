#include <iostream>
using namespace std; 
double squre(double);   
int main()
{
    double num = 123.456;     
    cout << "\n The the squre of " << num<< "is"<< squre(num);
   cout << "\n The current valus of num is " << num;
}
double squre(double x)
{
    return x * x;
 } 
