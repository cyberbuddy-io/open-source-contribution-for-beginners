/*No.of inversions required to sort the elements in a array in ascending order.*/


#include<stdio.h>

int main()
{
    int a[100], i, j, n, k, c=0;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    
    printf("Enter the elements\n");
    
    for(k=0; k<n; k++)
    {
        scanf("%d", &a[k]);
    }
    
    if(n==1)
    	printf("The no of inversions required to sort the given array is 0\n");
        
    for(i=0; i<n-1; i++) //[n-1] because an element cant be compared with itself
    {
        for(j=i+1; j<n;j++)
        {
            if(a[i]>a[j])
            {
                c++;
            }
            
        }
    }
    
    printf("The no of inversions required to sort the given array is %d\n", c);
    return 0;
}
