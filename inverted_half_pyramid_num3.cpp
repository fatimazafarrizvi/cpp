#include<iostream>
using namespace std;

//inverted half pyramid using numbers 2 (with different formula focus on 'j')

int main(){

    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<= n - i + 1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
Enter a number: 
4
1 1 1 1 
2 2 2
3 3
4 
*/