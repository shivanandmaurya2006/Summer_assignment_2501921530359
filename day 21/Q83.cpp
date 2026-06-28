// Write a program to Count vowels and consonants.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int vowel = 0, consonant = 0;
    cout << "Enter the string : ";
    getline(cin, str);
    for (char c : str)
    {
        if (((int)c >= 65 && (int)c <= 90) || ((int)c >= 97 && (int)c <= 122))
        {
            if (c == 'a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    cout<<"Totat number of vawels : "<<vowel<<" And consonants is: "<<consonant<<endl;
    return 0;
}
