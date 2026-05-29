//write a program to sum the. digits of a number.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, sum=0 ,rem;
    printf("Enter the number : ");
    scanf("%d",&num);
    while (num>0)
    {   rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    printf("The sum of the digits = %d",sum);
    
    
    return 0;
}
