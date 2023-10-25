#include<iostream>
using namespace std;

//inverted half pyramid 

int main (){

    int n;

    cout<<"Enter a number: \n";
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}
/*
Enter a number: 
4
* * * * 
* * *
* *
*   
*/