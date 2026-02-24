#include <iostream>
using namespace std;
int main()
{
    int z, i;
    int a[100];  
    cout << "Enter any positive integer : ";  
    cin >> z;  
    int found=0;

    for(i=0; i<100; i++)  
    {
       a[i]=i;  
    }
    for (i=0; i<100; i++)  
    {
        if(a[i]==z)  
        {
            found =1;  
            break;
        }
    }
    if(found==1) 
    {
        cout<<"We found the integer at index : "<<i<<endl;
    }
    else
    {
        cout<<"The number was not found."<<endl;
    }
    return 0;
}