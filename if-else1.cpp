#include<iostream>
using namespace std;

//Time pass program :)

int main(){
    //#ifndef ONLINE_JUDGE //NOT PART OF CODE USED TO MODIFY INPUT OUTPUT
       //freopen("input.txt", "r", stdin);
       //freopen("output.text", "w", stdout);
    //#endif   

cout<<"Going out on a Date:\n";

int savings;
cin>>savings;

if(savings>5000){
    cout<<"Very Sexy Man\n";
} else if(savings>2000){
    cout<<"Sexy Man\n";
} else {
    cout<<"Best Friend\n";
}
   return 0;
}
