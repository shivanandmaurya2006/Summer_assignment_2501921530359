//write a program to print multiplication oftable of a given number.
#include<stdio.h>   
int main() {
    int n;
printf("Enter the that you want to print : ");
scanf("%d",&n);
for (int i = 1; i <=10; i++)
{
    printf("%dX%d=%d\n",n,i,n*i);
    
}

return 0;
}