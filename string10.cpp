#include<iostream>
#include<string>

using namespace std;
//write in notes they compare lexicographically (alphabetical order) larger than the other string
int main(){

    string s1 , s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    
    int x = s1.compare(s2);

    if(x != 0){
        cout << "Strings are unequal\n";

        if (x>0){
            cout << s1 << " is greater than " << s2;
        }
        else{
            cout << s2 << " is greater than " << s1;
        }
    }
    else{
        cout << "Strings are equal";
    }
    
    return 0;

}