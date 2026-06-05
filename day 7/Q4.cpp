//writena program to recursive reverse number.
#include<iostream>
using namespace std;
int reverse(int n,int rev=0){

    if (n==0)
    {
        return rev;
    }
    else{
    return reverse(n/10,rev*10+n%10);
}
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<reverse(num);
    return 0;
}
