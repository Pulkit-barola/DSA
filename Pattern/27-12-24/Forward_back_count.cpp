#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to print the element";
    cin>>n;

    int i = 1;
    
    while(i<=n){
        int j = 1;
        while(j<=i){
            char count = 'A'+i+j-2;
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}