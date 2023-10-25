#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int num)
{
    for(int i=2; i<=sqrt(num);i++)
    {
        if(num%i==0)
         return false;
    }
    return true;
}

//if function is not returning anything then it will be of void type.

int main()
{
    int a,b;
    cin>>a>>b;
    
    for(int i=a;i<=b;i++)
    {
        if(is_prime(i))
           cout<<i<<endl;
    }

    return 0;
}
/*20 30
23
29*/