//Write a program to recursive sum of digits.
#include<iostream>
using namespace std;
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    return (n%10)+sum(n/10);

}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"The sum of digits is = "<<sum(num);
    return 0;
}    
