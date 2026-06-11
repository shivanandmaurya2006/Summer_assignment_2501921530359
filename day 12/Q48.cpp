//write a function for perfect number.
#include<iostream>
using namespace std;
int perfect(int n){
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==n)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if (perfect(num))
    {
        cout<<"the number is a perfect number.";
    }
    else{
        cout<<"the number is not a perfect number.";
    }
    
    return 0;
}
