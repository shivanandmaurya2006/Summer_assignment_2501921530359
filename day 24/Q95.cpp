//write a program to find longest word.
#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter the string : ";
    int max=0,count=0,i=0,index;
    getline(cin,str);
    for(char c:str){
        if (c!=' ')
        {
            count++;
        }
        if (max<count)
        {
            max=count;
            index=i;
        }
        if (c==' ')
        {
            count=0;
        }
        i++;
    }
    cout<<"The maximum charecters in the word is: "<<max<<" and the word is : ";
    for (int i = index-max; i <= index; i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}