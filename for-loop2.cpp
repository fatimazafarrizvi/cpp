#include<iostream>
using namespace std;

//Program to display multiplication table upto 10.(for loop)

int main(){

    int n;
    cout<<"Enter a positive number : ";
    cin>>n;

     cout<<"Table of "<<n<<endl;

    for(int i = 1; i <= 10; ++i){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
/*
Enter a positive number : 17
Table of 17 
17 * 1 = 17
17 * 2 = 34
17 * 3 = 51
17 * 4 = 68
17 * 5 = 85
17 * 6 = 102
17 * 7 = 119
17 * 8 = 136
17 * 9 = 153
17 * 10 = 170*/