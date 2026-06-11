//Write a program through function to find maximum.
#include<iostream>
using namespace std;
int maximum(int a , int b)
{
   if (a>=b)
   {
    return a;   
   }
   else 
   {
    return b;       
   } 
}
int main(int argc, char const *argv[])
{
    int x,y,z;
    cout<<"Enter the numbers : ";
    cin>>x>>y;
    z=maximum(x,y);
    cout<<"The largest number is : "<<z;
    return 0;
}
