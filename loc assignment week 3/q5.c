#include <stdio.h>

int palindrome(int);

int main()
{

    int NUMBER, SUM;

    printf("ENTER A NUMBER: ");
    scanf("%d", &NUMBER);

    SUM = palindrome(NUMBER);

    if (NUMBER == SUM)

        printf("THE GIVEN NUMBER %d IS A PALINDROME", NUMBER);

    else

        printf("THE GIVEN NUMBER %d IS NOT A PALINDROME", NUMBER);

    return 0;
}

int palindrome(int NUM)
{

    int REM;

    static int SUM = 0;

    if (NUM != 0)
    {

        REM = NUM % 10;

        SUM = SUM * 10 + REM;

        palindrome(NUM / 10);
    }

    return (SUM);
}