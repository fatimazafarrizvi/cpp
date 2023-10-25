#include<iostream>
using namespace std;

// nCr

int factorial(int n){
    int fact = 1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r;

    cin>>n>>r;

    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans;

    return 0;
}
/*5 2
10*/