#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;
    printf("\n Enter the no. of elements: ");
    scanf("%d", &n);
        
    printf("\n Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    
    for(i = 1; i <= n-1 ; i++)
    {
        j = i;
        while(j > 0 && a[j-1] > a[j])
        {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
        
    }
    printf("\n Sorted list in ascending order:\n ");
    for(i = 0; i <= n-1; i++)
    {
        printf("%d\n ", a[i]);
    }

    return 0;
}