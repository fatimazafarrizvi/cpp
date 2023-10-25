#include<iostream>
using namespace std;

// using max inbult function in cpp to compare 3 variables and give the max as output

int main(){

    int x,y,z,a;
    
    cin>>x>>y>>z;
    a = max(x,max(y,z));
    cout<<a;
    return 0;
}