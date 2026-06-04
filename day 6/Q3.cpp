//Write a program to count set bits in a number.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int num,count=0;
    cout<<"Enter the number:";
    cin>>num;
    while (num>0)
    {
        if ((num&1)==1)
        {
            count++;
        }
        num=num>>1;
    }
    cout<<"The total numbers of set bit is:"<<count;
    
    return 0;
}
