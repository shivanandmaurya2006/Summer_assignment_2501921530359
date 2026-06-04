//write a program to convert decimal to binary.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num,rem,binary=0,place=1;
    cout<<"Enter the decimal number : ";
    cin>>num;
    while (num>0)
    {
        rem=num%2;
        binary=binary+rem*place;
        place*=10;
        num=num/2;
    }
    cout<<"The binary number is : "<<binary<<endl;
    
    return 0;
}
