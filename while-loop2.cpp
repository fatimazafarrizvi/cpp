#include<iostream>
using namespace std;
//Program to add only positive numbers.(while loop)
int main(){

    int number;
    int sum=0;

    cout<<"Enter a number:";
    cin>>number;

    while(number>=0){

        sum = sum + number;
        cout<<"Enter a number:";
        cin>>number;
        
    }
      cout<<"Sum of all the positive numbers are "<<sum<<endl;
    
    return 0;
}