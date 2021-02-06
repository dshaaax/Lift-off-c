#include<stdio.h>
int main()
{
    float phy,chem,bio,math,comp,per;
    printf("Enter five subjects marks=\n");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
    per=(phy+chem+bio+math+comp)/500 * 100;
    printf("Percentage=%f\n",per);
    if(per>=90)
    {
        printf("GRADE A");
    }
    else if (per>=80)
    {
        printf("GRADE B");
    }
    else if(per>=70)
    {
        printf("GRADE C");
    }
    else if (per>=60)
    {
        printf("GRADE D");
    }
    else if (per>=40)
    {
        printf("GRADE E");
    }
    else
    {
        printf("GRADE F");
    }
    return 0;
}
