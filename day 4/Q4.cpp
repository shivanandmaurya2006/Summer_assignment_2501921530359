// write a program to print armstrong number in a range.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int lower, upper, temp1, temp2, digit, sum, rem;
    cout << "Give lower and upper limit of range eg(20 \"press enter\" 40 \"press enter\" ): ";
    cin >> lower >> upper;
    for (int i = lower; i <= upper; i++)
    {
        digit = 0, sum = 0;
        temp1 = temp2 = i;
        while (temp1 > 0)
        {
            temp1 = temp1 / 10;
            digit++;
        }
        while (temp2 > 0)
        {
            rem = temp2 % 10;
            sum += pow(rem, digit);
            temp2 = temp2 / 10;
        }
        if (sum == i)
        {
            cout <<"\t"<<i;
        }
    }

    return 0;
}
