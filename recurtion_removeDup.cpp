//This program removes only ajdacentduplicate words

#include<iostream>
using namespace std;

string removeDup(string s)
{
   
    if(s.length()==0)
    return "";

    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0])
    return ans;

    return (ch + ans);
}

int main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;

    cout<<"Word after removal of duplicate letters: ";
    cout<<removeDup(word);
    
    return 0;
}

/*Enter a word: ffaattiimmaa
Word after removal of duplicate letters: fatima*/