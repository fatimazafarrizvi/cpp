#include<iostream>
#include<string>
//so that s2 is printed after s1 without gap like one word.
using namespace std;

int main(){
    string s1 = "fam";
    string s2 = "ily";
    s1 = s1 + s2;
    cout << s1 << endl;
    return 0;
}