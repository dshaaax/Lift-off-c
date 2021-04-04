#include <stdio.h>
int multiply(int);
int main()
{
    int NUM, FACTORIAL;
    printf("\nENTER THE NUMBER: ");
    scanf("%d", &NUM);

    FACTORIAL = multiply(NUM);
    printf("-------------------------\n");
    printf("FACTORIAL OF %d IS: %d", NUM, FACTORIAL);
    return 0;
}
int multiply(int n)
{
    if (n == 0)
        return (1);

    return (n * multiply(n - 1));
}