#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number";
    cin>>n;

    int i = 1;
    char count = 'A';

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}