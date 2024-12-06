#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 0;
    while (i <= n) {
        sum += i;
        i = i+2;
    }
    cout<< sum << endl;
}