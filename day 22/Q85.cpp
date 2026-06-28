//Write a program to check a plindrom e string.
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int len=0,i=0;
    string str;
    cout<<"Enter the String :";
    getline(cin,str);
    len= str.length();
    for(char c: str){
        if (str[i]!=str[len-i-1])
        {
            cout<<"The string is not plindrom.";
            return 0;
            i++;
        }
        
    }
    cout<<"The string is plindrom.";
    return 0;
}