#include<iostream>
using namespace std;

//write a program to add to numbers using function

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
   int a,b;
   cin>>a>>b;

   cout<<add(a,b)<<endl;

   return 0;   
}

/*22 33
55*/
