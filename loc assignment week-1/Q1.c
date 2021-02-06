#include<stdio.h>
int main()
{
    float a,b,sum,product,subtraction,division;
    printf("Enter 2 Numbers\n");
    scanf("%f",& a);
    scanf("%f",& b);
    sum=a+b;
    printf("Sum=%f\n",sum);
    subtraction=a-b;
    printf("subtraction=%f\n",subtraction);
    product=a*b;
    printf("product=%f\n",product);
    division=a/b;
    printf("division=%f\n",division);
    return 0;
}