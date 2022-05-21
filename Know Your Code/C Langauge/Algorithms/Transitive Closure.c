#include <stdio.h>

int n, a[10][10], p[10][10];
void path()
{
    int i, j, k;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            p[i][j] = a[i][j];
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (p[i][k] == 1 && p[k][j] == 1)
                    p[i][j] = 1;
}
void main()
{
    int i, j;
    printf("\n\n----------------------Implementation of Topological Sorting algorithm--------------------\n\n");
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    path();
    printf("\nThe path matrix is shown below\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }
}
