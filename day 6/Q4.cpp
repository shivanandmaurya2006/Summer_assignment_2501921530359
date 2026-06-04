//write a program to find x^n without pow().
#include <iostream>

using namespace std;

int main() {
    int num,pow;
    float total=1;
    cout << "Enter the number(x)and power(n): ";
    cin >> num>>pow;
    if (pow>0)
    {
         for (int i = 0; i < pow; i++)
    {
        total=total*num;
    }
    }
    else if (pow==0)
    {
        cout<<"The value of "<<num<<"^"<<pow<<"= "<<"1."<<endl;
        return 0;
    }
    else if (num == 0 && pow < 0)
    {
        cout << "Undefined";
        return 0;
    }
    else{
        for (int i = 0; i <-pow; i++)
        {
            total=total*num;
        }
        total=1/total;
    }
     cout<<"The value of "<<num<<"^"<<pow<<"= "<<total<<endl;
    
    return 0;
}