#include <iostream>
using namespace std;
int main()
{
    int c[100];  
    int i=0, z;   
    do{
        cout<<"Enter a number : ";  
        cin>>z;       
        if(z!=-1)  
        {
            c[i]=z;
        }
        i++;   
    } while(z!=-1 && i<100); 
    cout<<"The total number of positive integers entered by user is : "<<i-1<<endl; 
    return 0;
}