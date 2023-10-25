#include<iostream>
using namespace std;

//half pyramid using numbers

int main(){
    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    for(int i=1; i<= n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
Enter a number: 
4
1 
1 2
1 2 3
1 2 3 4
*/