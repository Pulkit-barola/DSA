#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check prime number ";
    cin>>n;

    int i = 2;
    while (i<n)
    {
        if(n%i==0)
        {
            cout<<i<<" is not a prime number"<<endl;
            
        }
        else{
            cout<<i<<" is a prime number"<<endl;
           
        }
        i=i+1;
    }
    
}