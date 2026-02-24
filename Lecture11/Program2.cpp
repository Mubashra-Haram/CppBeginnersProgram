#include <iostream>
using namespace std;
int main()
{
    int a[10];  
    int sumofsquares=0;
    int i=0;    
    cout<<"Enter 10 numbers one by one : "<<endl;    
    for(i=0; i<10; i++) 
    {
        cin>>a[i]; 
    }
        for(i=0; i<10; i++) 
    {
        sumofsquares+=a[i]*a[i];
    }   
    cout<<"The sum of squares is : "<<sumofsquares<<endl;
}