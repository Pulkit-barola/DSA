#include<iostream>
using namespace std;

int main() {
    int A;
    cout<<"Enter the number to print"<<endl;
    cin >> A;

    int i = 1;
    int sum = 0;
    while(i<=A){
        cout<<" "<<i<<endl;
        sum += i;
        i++;
        
    }
    cout<<sum<<endl;
    return 0;
}