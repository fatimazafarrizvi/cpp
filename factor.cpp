#include<iostream>
using namespace std;

//program to print factor of a number.

int main()
{
    int n,count=0,i;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factors of "<<n<<" other than 1 and the number itself are: ";
    for(i=2;i<n;i++)
    {
       if(n%i==0)
         count++;
       if(count==1)
         cout<<i<<" ";
       count=0;
    }
}
/*
Enter a number: 500
Factors of 500 other than 1 and the number itself are: 2 4 5 10 20 25 50 100 125 250
*/