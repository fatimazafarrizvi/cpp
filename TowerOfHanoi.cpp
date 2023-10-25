#include<iostream>
using namespace std;

void towerofhanoi(int n, char src, char help, char dest)
{
    if(n==0)
    return;

    towerofhanoi(n-1, src, dest, help); //inki jagha swipe karne se sirf ch ki jagha change hogi  na ki orignal arguments change honge.
    cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1, help, src, dest);
}

int main()
{
   int n;
   cout<<"Enter no. of disk: ";
   cin>>n;

   towerofhanoi(n, 'S', 'H', 'D');

    return 0;
}

/*
Enter no. of disk: 4
Move disk 1 from S to H
Move disk 2 from S to D
Move disk 1 from H to D
Move disk 3 from S to H
Move disk 1 from D to S
Move disk 2 from D to H
Move disk 1 from S to H
Move disk 4 from S to D
Move disk 1 from H to D
Move disk 2 from H to S
Move disk 1 from D to S
Move disk 3 from H to D
Move disk 1 from S to H
Move disk 2 from S to D
Move disk 1 from H to D
*/