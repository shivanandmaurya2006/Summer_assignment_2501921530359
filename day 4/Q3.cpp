//write a program to check armstrong number.
#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{   int num,temp1,temp2,rem,sum=0,digit=0;
    cout<<"Enter the number : ";
    cin>>num;
    temp1=temp2=num;
    while (temp1>0)
    {
       temp1=temp1/10;
       digit++;
    }
    while (temp2>0)
    {
        rem=temp2%10;
        sum+=pow(rem,digit);
        temp2=temp2/10;
    }
    if (sum==num)
    {
        cout<<"This is the armstrong number";
    }
    else
    cout<<"This is not a armstrong number";
    return 0;
}
