#include<iostream>
using namespace std;

int main()
{
    int n, i, j, m=0;
   cin>>n;
    
    
    for(i=1;i<=n;i++)
    {
       for(j=2;j<i;j++)
       {
          if(i%j==0)
         {
           m++;
            break;
         }

       } 
       if(m == 0 && i!=1)
    {
        cout<<i<<" ";
    }
      m = 0;
    }
    cout<<endl;
    return 0;
    
}

/*
20
2 3 5 7 11 13 17 19 */