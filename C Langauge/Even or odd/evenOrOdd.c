#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three number separated with spaces : \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a % 2 == 0)
    {
        printf("The number %d is even\n", a);
    }
    else
    {
        printf("The number %d is odd\n", a);
    }
    if (b % 2 == 0)
    {
        printf("The number %d is even\n", b);
    }
    else
    {
        printf("The number %d is odd\n", b);
    }
    if (c % 2 == 0)
    {
        printf("The number %d is even\n", c);
    }
    else
    {
        printf("The number %d is odd\n", c);
    }
    return 0;
}