#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;

    int prevfact = factorial(n-1);
    return n*prevfact;

    //canalso be written directly return n*factorial(n-1) in one line.
}

int main()
{
    int n;
    cin>>n;

    cout<<factorial(n);
    return 0;

}

/*5
120*/