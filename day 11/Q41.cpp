// write a program to write function to find sum of two numbers.
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main(int argc, char const *argv[])
{
    int x,y,z;
    cout<<"Enter the numbers : ";
    cin>>x>>y;
    z=sum(x,y);
    cout<<"The sum of the numbers is : "<<z;
    return 0;
}
