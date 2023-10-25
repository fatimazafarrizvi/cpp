#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1; //name of this variable should be different than that of function name.
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans;
    return 0;
}
/*5
120*/