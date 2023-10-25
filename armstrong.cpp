#include<iostream>
#include<cmath>
using namespace std;

//e.g 153, 1, 0, 370, 371, 407 note 153 nhi chalra check karo +_+.
/*i changed line no. 16 from pow(lastdigit,3) to (lastdigit*lastdigit*lastdigit) as in the 
internet it says that pow function has problem in rounding of and hence 153 does not shows 
as armstrong number. problem fixed!! */

int main(){
    int n, sum=0;
    cin>>n;
    int original_number=n;
     
    while (n>0)
    {
        int lastdigit = n%10;
        sum+= (lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==original_number){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}