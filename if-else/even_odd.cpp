#include<iostream>
using namespace std;

int main(){
    int Even;
    cout<<"Enter any number :- "<<endl;
    cin>>Even;

    if (Even%2==0)
    {
        cout << "The number " << Even<< " Is  :- even ";
    }
    else{
        cout << "The number " << Even<< " Is  :- odd ";
    }
    

}