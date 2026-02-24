#include <iostream>
using namespace std;
int main()
{
   float radius, diameter, circumference, area;
   cout << "Enter radious ";
   cin >> radius;
   diameter = 2 * radius;
   circumference = 2 * 3.14 * radius;
   area = 3.14 * radius * radius;
   cout <<"diameter is"<< diameter << endl;
   cout <<"circumference is "<< circumference << endl;
   cout <<"area is" <<area << endl;
     
} 