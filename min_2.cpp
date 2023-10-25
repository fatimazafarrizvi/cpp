#include<iostream>
using namespace std;

int main(){
    int x,y,z,a;

    cin>>x>>y>>z;

    a = min(x, min(y,z));
    cout<<a;
    
}