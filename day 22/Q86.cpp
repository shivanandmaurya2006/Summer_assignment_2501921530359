//write a program to count words in a program.
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string str;
    int count=1;
    cout<<"Enter the String : ";
    getline(cin,str);
    for(char c : str){
        if (c==' ')
        {
            count++;
        }
        
    }
    cout<<count;
    
    return 0;
}