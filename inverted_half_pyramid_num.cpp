#include<iostream>
using namespace std;

//inverted half pyramid using numbers

int main(){

    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){

            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
4
1 2 3 4 
1 2 3
1 2
1
*/