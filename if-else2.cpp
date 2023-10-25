#include<iostream>
using namespace std;

//Program to find the maximum among the three numbers

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
          cout<<c<<endl;
        }    
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
  return 0;
}
/*22 55 44
55*/