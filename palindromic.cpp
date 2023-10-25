#include<iostream>
using namespace std;

//palindromic pattern 

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
           int k=i;    
        int j=1;
        for(; j<=n-i; j++){

            cout<<"  ";
        }
       
        for(; j<=n; j++){
          
            cout<<k<<" ";
            k--;
        }
         k=2;
        for(; j<=n+i-1; j++){
            
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}

/*
4
      1 
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4*/