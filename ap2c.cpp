#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Press a character and press enter:";
    cin>>ch;
    cout<<ch;
    // to test chainability of following operator.

    cin>>ch>>ch;
    cout<<ch<<ch;

    return 0;
}