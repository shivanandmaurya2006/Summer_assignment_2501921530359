// write a progaram to find product of digits.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, rem, product = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        product = product * rem;
        num = num / 10;
    }
    printf("The product of digits of number = %d", product);

    return 0;
}
