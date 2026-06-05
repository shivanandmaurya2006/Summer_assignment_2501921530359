//Write a program to recursive fibonacci;
#include<iostream>
using namespace std;
int fib(int n){
   int x=0, y=1,z;
   if (n<=0)
   {
    return x;
   }
   if (n==1)
   {
        return y;
   }
   return fib(n-1)+fib(n-2);
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    for (int i = 0; i <num; i++)
    {
        cout<<"\t"<<fib(i);
    }
    
    return 0;
}
