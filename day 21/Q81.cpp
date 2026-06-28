//write a program to find string length without strlen().
#include <iostream>

using namespace std;

int main() {
    string str;
    int count=0;
    cout<<"Enter the string : ";
    getline(cin,str);
   for(char c: str){
      
      if (c==' ')
      {
        continue;
      }
      else{
        count++;
      }
      
   }
   cout<<"Total charecter in the string is : "<<count<<endl;

    return 0;
}