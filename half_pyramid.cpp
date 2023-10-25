#include<iostream>
using namespace std;

//half pyramid pattern

int main(){

    int n;

    cout<<"Enter a number: \n";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
/*
Enter a number: 
4
 *
 * *
 * * *
 * * * * 
 */