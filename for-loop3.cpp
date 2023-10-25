#include<iostream>
using namespace std;

//Pocket money aur go out wala program.

int main(){
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){

        if(date%2==0){
            //skips if satisfied and continues the loop.
            continue;
        }
        if(pocketMoney==0){
            //This helps to break the loop and come out of it. 
            break;
        }
        cout<<"On date: "<<date<<" go out"<<endl;
        pocketMoney=pocketMoney-300;
    }
    return 0;
}
/*On date: 1 go out 
On date: 3 go out 
On date: 5 go out
On date: 7 go out
On date: 9 go out
On date: 11 go out
On date: 13 go out
On date: 15 go out
On date: 17 go out
On date: 19 go out*/