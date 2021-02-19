#include<stdio.h>

int main()
{
    int a[10],i;
    int e=0;
    int ep=0;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
    scanf("%d",& a[i]);
    {
        if(a[i]%2==0)
        e=e+a[i];
    }
    for (i=1;i<=9;i++)
    {
        if (i%2==0)
        ep=ep+a[i];
    }
    printf("sum of even is %d\n",e);
    printf("sum of even position elements is %d",ep);
    return 0;
}

