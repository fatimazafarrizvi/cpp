#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    string s1 = "fam";
    string s2 = "ily";
    //so that s2 is printed after s1 without gap like one word. 
    s1.append(s2);
    cout << s1 << endl;
    return 0;
}