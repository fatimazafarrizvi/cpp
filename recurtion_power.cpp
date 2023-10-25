#include<iostream>
using namespace std;

//problem in this questiion is it is not working for bigger power e.g 2^31, 3^48 etc.

int power(int n, int p)
{
    if(p==0)
    return 1;

    int prevPower = power(n, p-1);
    return n*prevPower;
}

int main()
{
    int n,p;
    cin>>n>>p;

    cout<<power(n,p);
    return 0;
}

/*3 5
243*/