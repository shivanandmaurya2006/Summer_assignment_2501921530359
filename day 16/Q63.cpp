//write a program to find pair with give sum;
#include <iostream>

using namespace std;

int main() {
    int sum ,a ,b;
    cout<<"Enter the sum : ";
    cin>>sum;
    cout<<"The pairs are : ";
    for (int i = 0; i <=(sum/2); i++)
    {
        for (int j = 0; j <sum; j++)
        {
            if (i+j==sum)
            {
                cout<<"("<<i<<","<<j<<")"<<"\t";
            }
            
        }
        
    }
    
    return 0;
}