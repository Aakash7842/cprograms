#include<stdio.h>
void main()
{
    int n,rev=0,rem;
    printf("enter a number :");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("to reverse a number is %d",rev);
}
