//write a program to find nth fibbonacci term.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int term,a=0,b=1,c;
    cout<<"Enter the nth term : ";
    cin>>term;
    if (term==1)
    {
        cout<<a;
    }
    else if (term==2)
    {
        cout<<b;
    }
     else
    
    for (int  i = 3; i <= term; i++)
    {
        c=b;
        b=a+b;
        a=c;

    }
    cout<<b;
    return 0;
}
