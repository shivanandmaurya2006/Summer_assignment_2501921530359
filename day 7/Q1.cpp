//Write a program  to recursive factorial.
#include<iostream>
using namespace std;
int fact(int n){
    if (n<=1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"The factorial of number is : "<<fact(num);
    return 0;
}

