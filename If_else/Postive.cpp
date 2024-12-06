// indentify  the  number is postive or not
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num>0)
    {
        cout << num << " is a positive number.";
    }
    else{
        cout << num << " is not a positive number.";
    }
    
}