#include<stdio.h>
int main()
{
    float R,D,C,A;
    printf("Enter the radius of the circle=\n");
    scanf("%f",& R);
    D=2*R;
    printf("Diameter of circle=%f\n",D);
    C=2*3.14*R;
    printf("Circumference of circle=%f\n",C);
    A=3.14*R*R;
    printf("Area of circle=%f\n",A);
    return 0;
}