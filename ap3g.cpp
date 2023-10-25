#include<iostream>
using namespace std;

//decimal output ke leye calculator jo sab sath mein hora(float). :D 

int main(){

      float a, b;
     cout<<"Input two numbers: ";
     cin>>a>>b;

     cout<<"Output of division, addition, substraction and multiplication of two given numbers: "<<endl;

     char op;           
            
        //if(op = '/'){
            float div = a/b;
            cout<<"a "<<"/"<<" b = "<< div <<endl;
         //}

          //if(op = '+'){
              float add = a + b;
              cout<<"a "<<"+"<<" b = "<<add<<endl;
          //}

          //if(op = '-'){
              float subs = a - b;
              cout<<"a "<<"-"<<" b = "<<subs<<endl;
           //}
          
           //if(op = '*'){
               float multi = a * b;
               cout<<"a "<<"*"<<" b = "<<multi<<endl;
           //}

           //else{
            // cout<<"Error"<<endl;
           //}            
    return 0;
}