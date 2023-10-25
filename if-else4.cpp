#include<iostream>
using namespace std;

//Program to test if/else

int main(){
    int age;
    cin>>age;
    
    if(age >= 18) {
        cout<<"You Can Vote.";
    }
    else{
        cout<<"Not Eligible For Voting.";
    }
    return 0;
}