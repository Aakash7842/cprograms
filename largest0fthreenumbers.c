#include <stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter a,b,c values: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest",a);
        }
    }
    else if(b>c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
}
