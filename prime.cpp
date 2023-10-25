#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=0;
//sqrt of n because == agar n ke sqrt se bada no. hoga uska multiple toh wo probably multiply 
//chote se jisse check kar chuke honge.
// e.g 100 tak check karna hai no. 99 hai toh we know 3*33=99 aur 3 se already check jo chuka hai. 
    for(int i=2; i<=sqrt(n);i++) 
    {
        if(n%i==0)
        {
            cout<<"Not Prime"<<endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"Prime"<<endl;
    }
    return 0;
}