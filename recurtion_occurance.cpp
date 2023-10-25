//Find the first and last occurence of a number in an array.
#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int i, int key)
{
    if(i==n)
    return -1;
    
    if(arr[i]==key)
    return i;
    
    return first_occ(arr,n,i+1,key);
}
int last_occ(int arr[], int n, int i, int key)
{
    if(i==n)
    return -1;
    
    int restArray = last_occ(arr, n, i+1, key); //ye phele call karke last tak jaega phr further function ke taraf jaega.
    
    if(restArray!=-1)
    return restArray; // -1 matlab nhi mela element
    
    if(arr[i]==key)
    return i; //ye i ab last mein point karra toh last se check hoga.

    return -1; //agar key nhi meli tab -1 return hoga matlab no return;
}


int main()
{
int x,key;
cout<<"size of array: ";
cin>>x;

int arr[100];
cout<<"elements of array: ";
for(int i=0;i<x;i++)
cin>>arr[i];
cout<<"key element: ";
cin>>key;

cout<<"first occurance of key in the array: ";
cout<<first_occ(arr,x,0,key)<<endl; // 0 matlab 1st index se search karna hai.
cout<<"last occurance of key in the array: ";
cout<<last_occ(arr,x,0,key);

    return 0;
}

/*size of array: 5
elements of array: 1
1
2
3
1
key element: 1
first occurance of key in the array: 0
last occurance of key in the array: 4*/