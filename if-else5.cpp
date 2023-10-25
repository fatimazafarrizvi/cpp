#include<iostream>
using namespace std;

//Program to check if a triangle is scalene, isosceles or equilateral.

int main(){
     
     cout<<"Print the type of triangle.\n";

     int sideA, sideB, sideC;
     cout<<"Input Three Sides Of Triangle:";
     cin>>sideA>>sideB>>sideC;

     if(sideA==sideB && sideB==sideC){
        cout<<"This is an equilateral triangle.\n";
     }
     else if (sideA==sideB||sideA==sideC||sideB==sideC){
        cout<<"This is an isosceles triangle. \n";
     }
    else{
        cout<<"This is sclene triangle.\n";
    }
    return 0;
}
/*
Print the type of triangle.
Input Three Sides Of Triangle:22 22 22
This is an equilateral triangle.

Print the type of triangle.
Input Three Sides Of Triangle:22 22 23
This is an isosceles triangle.

Print the type of triangle.   
Input Three Sides Of Triangle:20 23 22
This is sclene triangle. */