#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number :- "<<endl;
    cin>>n;

    int i = 1;
    while(i<=n){
        // space 
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        // star 
        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }

        cout<<endl;
        i++;
    }
}