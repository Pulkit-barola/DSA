#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the element number: ";
    cin >> n;

    char  Start = 'A';
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout << Start << " ";
            Start++;
            j++;
        }
        cout << endl;
        i++;
    }
}