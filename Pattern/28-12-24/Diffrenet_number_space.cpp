#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout<<"Enter the n:- ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout << " ";
            space--;
        }

        int j = i;
        while(j<=n){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
}