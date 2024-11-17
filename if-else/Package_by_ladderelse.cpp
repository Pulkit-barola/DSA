#include<iostream>
using  namespace std;

int main(){
    int package;
    cout<<"Enter you package"<<endl;
    cin>>package;

    if (package>=2000000)
    {
        cout<<"This is good package at this time ";
    }
    else if (package<2000000 && package>=1000000)
    {
        cout<<"This is average package  you can do best it!!!";
    }
     else
    {
        cout<<"INVALID NUMBER!!!";
    }
    
}
