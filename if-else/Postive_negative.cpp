#include<iostream>
using namespace std;

int main(){
    int Num;
    cout<<"Enter any Number :- ";
    cin>>Num;

    if (Num>0)
    {
        cout << "The number " << Num << " " <<" Is postive";
    }
    else if (Num<0)

    {
        cout<<"The number " << Num << " "<< "Is negative";
    }
    else{
        cout<<"The number "<<Num << " " << "Is 0";
    }
    
}