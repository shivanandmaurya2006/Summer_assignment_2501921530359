//write a program to find gcd of two number.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int num1 , num2;
    cout<<"enter the number 1 :";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;
    while (num2!=0)
    {
       int temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    cout<<"The gcd of both number is = "<<num1;
    return 0;
}
