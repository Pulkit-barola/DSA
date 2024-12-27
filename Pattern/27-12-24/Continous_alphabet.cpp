#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    char start = 'A'; // Starting character
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
