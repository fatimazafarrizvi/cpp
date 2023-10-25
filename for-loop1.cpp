#include<iostream>
using namespace std;
//Program to find sum of natural numbers till n.(for loop)
int main(){

    int n;
    cout<<"Enter number 'n' : ";
    cin>>n;

    int sum=0;
    for(int counter=1; counter<=n; counter++){
        sum=sum+counter;
    }

    cout<<"sum : "<<sum<<endl;

    return 0;
}