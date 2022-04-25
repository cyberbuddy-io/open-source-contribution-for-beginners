#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, i * num);
    }
    fclose(ptr);
    printf("The multiplication table of %d from 1 to 10 is created on table.txt file successfully!!", num);
    return 0;
}