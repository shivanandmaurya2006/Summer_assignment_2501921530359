//Write a function to check whether a number is an Armstrong number.
#include<iostream>
#include<math.h>
using namespace std;
int Arm(int a){
    int rem,sum=0,temp,num,count=0;
    temp=num=a;
    while (num>0)
    {
       count++;
       num/=10;
    }
    while (temp>0)
    {
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp/=10;
    }
    return (sum==a);
}
int main(int argc, char const *argv[])
{
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    if (Arm(x))
    {
        cout<<"The number is Armstrong number. ";
    }
    else{
        cout<<"The number is not a armstrong number. ";
    }
    return 0;
}
