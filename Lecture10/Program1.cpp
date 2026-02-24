#include <iostream>
using namespace std;
int i;   
void f();   
int main()
{
    i = 8;
    cout << "\nIn main(), the value of i is: " << i;
    f();
    cout << "\nBack in main(), the value of i is: " << i;
    cout << "\nBack in main(), the value of i is: " << i;
    return 0;
}
void f()
{
    cout << "\nIn f(), the value of i is: " << i;
    i = 16;
}