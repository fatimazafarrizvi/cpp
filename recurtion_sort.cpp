#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==1)
     return true;
    
    bool restArray = sorted(arr+1, n-1); //array will start from 2nd element and hence size of the array dec by one.
    return(arr[0]<arr[1] && restArray); //it will return true if it is true (bool type mentioned already)

}

int main(){

int arr[5];


for(int i=0; i<5; i++)
cin>>arr[i];

cout<<sorted(arr, 5)<<endl;
return 0;
}

/*1 2 3 4 5 6
1

1 3 2 4 5 7 6
0*/