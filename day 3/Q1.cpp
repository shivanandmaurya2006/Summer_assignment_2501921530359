//write a program to check whether a number is prime. 
#include<iostream>  
using namespace std;
int main(int argc, char const *argv[])
{   int num,count=0;
    cout<<"Enter the number : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
        
    }
    if (count>2||num==1)
    {
        cout<<num<<" is not a prime number.";

    }
    else
    cout<<num<<" is a prime number.";
    return 0;
}
