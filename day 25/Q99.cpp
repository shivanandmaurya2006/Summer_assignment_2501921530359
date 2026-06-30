//Write a program to Sort names alphabetically.
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

    int n ;
    cout<<"Enter the total number of names : ";
    cin>>n;
    cin.ignore();

    string name[n];
      
    cout<<"Enter the names : ";
     
    for (int i = 0; i < n; i++)
    {
        getline(cin,name[i]);
    }
    
    sort(name,name+n);
    cout<<"The alphabetically names : ";
    for (int i = 0; i < n; i++)
    {
        cout<<name[i]<<endl;
    }
    
    
    return 0;
}