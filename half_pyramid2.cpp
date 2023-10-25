#include<iostream>
using namespace std;

//half pyramid after 180 degree rtation..

int main(){

    int n;
    cout<<"Enter a number: \n";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }

             }
             cout<<endl;
    }
    return 0;
}
/*
Enter a number: 
4
      * 
    * *
  * * *
* * * *   
*/