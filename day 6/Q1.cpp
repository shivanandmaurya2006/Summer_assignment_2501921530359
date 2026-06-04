// write a prigram to convert binary to decimal.
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, rem, decimal = 0, count = 0;
    cout << "Enter the binary Number : ";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        if (rem != 1&&0)
        {
            cout<<" Invalid input ! ";
            return 0;
        }
        else
        decimal += rem*pow(2, count);
        num = num / 10;
        count++;
    }
    cout<<"The decimal value = "<<decimal;
    return 0;
}
