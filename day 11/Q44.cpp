//Write a program to find the factorial through function.
#include<iostream>
using namespace std;
int fact(int a){
    if (a<=1)
    {
        return 1;
    }
    
     return a*fact(a-1);
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"The factorial value of number is : "<<fact(num);
    return 0;
}
