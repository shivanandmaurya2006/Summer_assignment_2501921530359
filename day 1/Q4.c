//write a program to count digits in a numaber.
#include<stdio.h>
int count(int num){
    int digit=0;
    while (num>0)
    {
        num=num/10;
        digit++;
    }
    return digit;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Total digits in this number is : %d",count(n));
    
    
    return 0;
}