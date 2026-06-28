//write a program to find maximum occuring charecter.
#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int max=0,count;
    char ch;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {   count=1;
        for (int j = i+1; j < len; j++)
        {
            if (str[i]==str[j])
            {
                count++;
            }
            
        }
        if (count>max)
        {
            max=count;
            ch=str[i];
        }
        
    }
    cout<<"The maximum occuring charecter is "<<ch<<" . that occurs "<<max<<" times.";
    return 0;
}