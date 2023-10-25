#include<iostream>
using namespace std;

//Using switch operator.

int main(){

    char button;
    cin>>button;

    switch (button){
         
         case 'a':
         cout<<"Hello"<<endl;
         break;

         case 'b':
         cout<<"Namaste"<<endl;
         break;

         case 'c':
         cout<<"Salam"<<endl;
         break;

         case 'd':
         cout<<"Hola"<<endl;
         break;

         case 'e':
         cout<<"Ciao"<<endl;
         break;

         default:
         cout<<"I am still learning more!"<<endl;
         break;
    }
    return 0;
}