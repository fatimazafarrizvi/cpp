#include<iostream>
using namespace std;

void dec(int n)
{
    if (n==1)
    {
        cout<<"1"<<endl;
        return;
    }
        
    cout<<n<<endl; //first it will print n then moves to second line of code
    dec(n-1); //it will call itself and code will run again from start to print n-1.
}

void inc(int n)
{
    if (n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main(){
    
    int n; 
    cin>>n;
    
    cout<<"In decreasing order."<<endl;
    dec(n);
    cout<<"In increasing order."<<endl;
    inc(n);

    return 0;
}

/*4
In decreasing order.
4
3
2
1
In increasing order.
1
2
3
4*/