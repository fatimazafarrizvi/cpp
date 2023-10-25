//reverse a string using recurtion.
#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length()==0) //when all the ch is called it will return
    return;

    string baki_s = s.substr(1); //substr likh k usme jo index number pass karenge usse uske baad wale ch baki_s me save hojaenge usse last ch tak ek ek kar strings save hogenge.
    
    reverse(baki_s); // isse last ch tak ek ek karke call hoga.
    cout<<s[0]; //isse har ek string jo store hori hai uska phela ch print hoga
}


int main()
{
    string s;
    getline(cin, s); // getline to input a sentance

    reverse(s);

    return 0;
}

/*My cutie pie.
.eip eituc yM*/