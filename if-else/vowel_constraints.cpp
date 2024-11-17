#include<iostream>
using namespace std;

int main(){
    char Character;
    cout<<"Enter the any character ";
    cin>>Character;

    if ((Character=='a'||Character=='A')||(Character=='e'||Character=='E')||(Character=='i'||Character=='I')||(Character=='o'||Character=='O')||(Character=='u'||Character=='U'))
    {
        cout<<"The character "<< Character << " "<< "is vowel";

    }
    else{
        cout<<"The character "<< Character << " " << "is Constraints";
    }
}