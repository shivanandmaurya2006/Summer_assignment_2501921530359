//write a program to print number pyramid.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int count=1;
   for (int i = 0; i < 5; i++)
   {
     for (int k = 5; k >i; k--)
     {
        cout<<" ";
     }
     
     for (int j = 0; j <= i; j++)
     {
        cout<<count;
        count++;

     }
     count--;
     for (int m = i; m >0 ; m--)
     {
        count--;
        cout<<count;
     }
     
     count=1;
     cout<<endl;
     
   }
   
    return 0;
}
