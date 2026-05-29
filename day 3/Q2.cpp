//write a program to print prime number in a range.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int lower, upper,count=0;
    cout<<"Enter the range eg.(20 'press enter' 90 'press enter')";
    cin>>lower>>upper;
    for (int i = lower; i <=upper; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if (i%j==0)
            {
                count++;
            }
            
        }
        if (count<=2||i==1)
        {
            cout<<" "<<i;
        }
        count=0;
    }
    
    return 0;
}
