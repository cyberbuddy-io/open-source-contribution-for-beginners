#include <stdio.h>
int min(int, int);
void floyds(int p[10][10], int n)
{
    int i, j, k;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (i == j)
                    p[i][j] = 0;
                else
                    p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
}
int min(int a, int b)
{
    if (a < b)
        return (a);
    else
        return (b);
}
void main()
{
    int p[10][10], w, n, e, u, v, i, j;
    printf("\n\n----------------------Implementation of Topological Sorting algorithm--------------------\n\n");
    printf("\nEnter the number of vertices:");
    scanf("%d", &n);
    printf("\nEnter the number of edges:  ");
    scanf("%d", &e);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            p[i][j] = 999;
    }
    for (i = 1; i <= e; i++)
    {
        printf("\nEnter the end vertices of edge %d with its weight : ", i);
        scanf("%d%d%d", &u, &v, &w);
        p[u][v] = w;
    }
    printf("\nMatrix of input data:   ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d \t", p[i][j]);
        printf("\n");
    }
    floyds(p, n);
    printf("\nTransitive closure:   \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d \t", p[i][j]);
        printf("\n");
    }
    printf("\nThe Shortest paths are:   \n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            if (i != j)
                printf("\n <%d,%d>=%d", i, j, p[i][j]);
        }
}
