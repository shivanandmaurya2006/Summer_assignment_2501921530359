//write a program to check a perfect number.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int num,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    for (int i = 1; i*i < num; i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (num==sum)
    {
        cout<<"Given number is a perfect number ";

    }
    else
    cout<<"Given number is not a perfect number ";
    return 0;
}
