#include<iostream>
using namespace std;

//rectangle pattern

int main(){

    int row, col;
     
    cout<<"Enter number of rows: \n";
    cin>>row;
    cout<<"Enter number of columns: \n";
    cin>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
/*
Enter number of rows: 
4
Enter number of columns: 
3
 * * *
 * * *
 * * *
 * * * 
 */