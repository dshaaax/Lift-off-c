#include <stdio.h>

int fact(int);
void main()
{
    int NUMBER, FACTORIAL;

    printf("ENTER A NUMBER: ");
    scanf("%d", &NUMBER);
    FACTORIAL = fact(NUMBER);
    printf("---------------------\n");
    printf("FACTORIAL OF %d IS %d\n", NUMBER, FACTORIAL);
}

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}