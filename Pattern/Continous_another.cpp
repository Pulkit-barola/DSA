#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the number :- ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = i;
        while(j<2*i){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}