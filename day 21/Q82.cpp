//write a program to reverse a string.
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}