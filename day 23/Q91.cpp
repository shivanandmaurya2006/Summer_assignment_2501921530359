// Write a program to check anagram string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cout << "Enter the first string : ";
    getline(cin, str1);

    string str2;
    cout << "Enter the second string : ";
    getline(cin, str2);
    
    int len1=str1.length();
    int len2=str2.length();

    if (len1!=len2)
    {
        cout<<"The string is not anagram.";
    }
    else{
        for (int i = 0; i < len1; i++)
        {    int count=0;
            for (int j = 0; j < len2; j++)
            {
                if (str1[i]==str2[j])
                {
                    count++;
                }
                
            }
            if (count<1)
            {
                cout<<"The string is not anagram .";
                return 0;
            }
            
        }
        cout<<"The string is anagram.";
    }
    return 0;
}