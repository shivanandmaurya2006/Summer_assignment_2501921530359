//write a program to genrate fibonacci series.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int a,b,c,length;
    cout<<"Enter the length of fibonacci series : ";
    cin>>length;
    a=0,b=1;
    if (length>=1)
    {
        cout<<a;
    }
    if (length>=2)
    {
        cout<<"\t"<<b;
    }
    
    for (int i = 2 ; i < length; i++)
    {  
        c=b;
        b=a+b;
        a=c;
        cout<<"\t"<<b;
    }
    
    return 0;
}
