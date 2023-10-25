#include<iostream>
using namespace std;

//implement a single calculator using switch.

int main(){

    int n1, n2;
    cout<<"Input two numbers: ";
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator: ";
    cin>>op;

    switch(op){

        case '+':
        cout<< n1 + n2 <<endl;
        break;

        case '-':
        cout<< n1 - n2 <<endl;
        break;

        case '*':
        cout<< n1 * n2 <<endl;
        break;

        case '/':
        cout<< n1 / n2 <<endl;
        break;

        default:
        cout<<"Enter another operator"<<endl;
        break;
    }
    return 0;   
}