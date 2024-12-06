#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    // Check if the character is an uppercase letter

    if (ch >= 'A' && ch <= 'Z') {
        cout << "This character is an uppercase letter." << endl;
    } 
    else if(ch >= 'a' && ch <= 'z') {
        cout << "This character is a lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "This character is a digit." << endl;
    }
    else {
        cout << "This character is not a letter or a digit." << endl;
    }
}