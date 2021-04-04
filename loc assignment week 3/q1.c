#include <stdio.h>

int square(int);

int main()
{
    int NUMBER, ANSWER;

    printf("\nENTER THE NUMBER: ");
    scanf("%d", &NUMBER);

    ANSWER = square(NUMBER);
    printf("---------------------\n");
    printf("SQUARE OF %d IS %d", NUMBER, ANSWER);
}

int square(int n)
{
    return (n * n);
}