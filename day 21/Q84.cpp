//write a program to convert lowercase to uppercase.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int i=0;
    cout<<"Enter the string: ";
    getline(cin,str);
    for(char c : str){
        if ((int)c >= 97 && (int)c <= 122)
        {
            str[i]=(char)((int)c-32);
        }
        i++;
    }
    cout<<str<<endl;
    return 0;
}