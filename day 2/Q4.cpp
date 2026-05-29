//Write a program to check wheather a number is palindrome.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int num,D_num,rev=0,rem;
    cout<<"Enter the number : ";
    cin>>num;
    D_num=num;
    while (D_num>0)
    {   
        rem=D_num%10;
        rev=rev*10+rem;
        D_num=D_num/10;
    }
    if (num==rev)
    {
        cout<<" The number is palindrome";
    }
    else 
    {
       cout<<"The number is not a palindrome number .";
    }
    
    return 0;
}
