#include <stdio.h>

int main()
{
    int d1, m1, y1, d2, m2, y2, r1, r2, r3;
    printf("*********************************************************\n");
    printf("                    Age calculator                       \n");
    printf("*********************************************************\n");

    printf("\nEnter your Birth Date: ");
    scanf("%d", &d1);
    printf("Enter your Birth Month: ");
    scanf("%d", &m1);
    printf("Enter your Birth Year: ");
    scanf("%d", &y1);

    printf("Enter your current Date: ");
    scanf("%d", &d2);
    printf("Enter your current Month: ");
    scanf("%d", &m2);
    printf("Enter your current Year: ");
    scanf("%d", &y2);

    if ((d1 > 31 || d1 < 1) && (d2 > 31 || d2 < 1) && (m1 > 12 || m1 < 1) && (m2 > 12 || m2 < 1) && (y1 < 0 && y2 < 0))
    {
        printf("You Enter Something Wrong, Please Try Again");
    }
    else
    {
        r3 = y2 - y1;
        if (d2 >= d1)
        {
            r1 = d2 - d1;
        }
        else
        {
            m2 = m2 - 1;
            d2 = d2 + 30;
            r1 = d2 - d1;
        }
        if (m2 >= m1)
        {
            r2 = m2 - m1;
        }
        else
        {
            y2 = y2 - 1;
            m2 = m2 + 12;
            r2 = m2 - m1;
        }
        printf("Youe Age Is %d year %d month %d day", r3, r2, r1);
    }
    return 0;
}
