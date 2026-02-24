#include <iostream>
using namespace std;  
void f(int i);   
int main()
{
    int i = 10;
    cout << "\nIn main(), the value of i is: " << i;
    f(i);
    cout << "\nBack in main(), the value of i is: " << i;
    return 0;
}
void f(int i)
{
    i *= 2;
    cout << "\nIn f(), the value of i is: " << i;
 } 