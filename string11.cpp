#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "abc";
    cout << "Before clearing: " << s1 << endl;
    
    s1.clear();

    if(s1.empty()){
        cout <<"String is empty";
    }
    return 0;
}