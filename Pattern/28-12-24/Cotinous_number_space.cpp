#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" Enter the n :- " ;
    cin>>n;

    int i = 1;
    int count = 1;

    while(i<=n){
        int space = n-i;
        while(space>0){
            cout<< " ";
            space--;
        }

        int j = 1;
        while(j <= i){
            cout<< count << " ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}