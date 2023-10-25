//replace pi with 3.14 in string

#include<iostream>
using namespace std;

void replace_pi(string s)
{
    if(s.length()==0)
    return;

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replace_pi(s.substr(2)); // removes two ch from start.
    }
    else
    {
        cout<<s[0];
        replace_pi(s.substr(1));
    }
}



int main()
{
    string s;

    cin>>s; //only one word

    replace_pi(s);

    return 0;
}

/*pie
3.14e*/