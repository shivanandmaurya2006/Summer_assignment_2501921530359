//write a function for fibbonaci series.
#include<iostream>
using namespace std;
void fib(int n){
    int x=0,y=1,z;
    if (n>=1)
    {
        cout<<x;
    }
    if (n>=2)
    {
        cout<<"\t"<<y;
    }
    for (int i = 3; i <=n; i++)
    {
        z=x+y;
        cout<<"\t"<<z;
        x=y;
        y=z;
    }
    
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    fib(num);
    return 0;
}
