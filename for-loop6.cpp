#include<iostream>
using namespace std;

//Program to print all the odd numbers till "n".

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"All the odd numbers till "<<n<<" are:"<<endl;

    for(int i=2; i<=n; i++){
         
         if(i%2==0){
            continue;
         }
         cout<<i<<" ";
    }
    return 0;
}
/*Enter a number: 10
All the odd numbers till 10 are:
3 5 7 9*/