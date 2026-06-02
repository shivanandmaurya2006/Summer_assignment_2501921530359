//Write a program to print factors of a number.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int num;
    cout<<"Enter the number : ";
    cin>>num;
    for (int i = 1; i*i <= num; i++)
    {
        if (num%i==0)
        {
            if (i==num/i)
            {
               cout<<i<<"\t";
            }
            else
            cout<<i<<"\t"<<num/i<<"\t";
        }
        
    }
    
    return 0;
}
//this is efficient way to solve and time complexity is o(n)^1/2 but it is not giving sorted result.  we will do this later.

