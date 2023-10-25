#include<iostream>
using namespace std;

void fib(int n){
    int t0 = 0, t1 = 1, t2;

    for(int i=1;i<=n;i++)
    {   
        cout<<t0<<" ";
        t2 = t0 + t1;
        t0 = t1;
        t1 = t2;
    } 
    return;
}

int main(){
    int n;
    cin>>n;

    fib(n);

    return 0;
}
/*10
0 1 1 2 3 5 8 13 21 34 */