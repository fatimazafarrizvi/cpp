#include<iostream>
using namespace std;

//half pyramid using numbers 2

int main(){

    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
Enter a number: 
4
1 
2 2
3 3 3
4 4 4 4
*/