#include<iostream>
using namespace std;

int main() {
    int c;
    cout<<"Enter the any element number:- ";
    cin>>c;

    int i =1;
    while (i<=c){
       int j = 1;
       while (j<=c){
            char ch = 'A'+i+j-2;
            cout<<ch;
            j++;
       }
       
       i++;
       cout<<endl;
    }
     

}