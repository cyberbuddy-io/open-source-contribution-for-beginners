#include<iostream>
using namespace std;
 

void segregateEvenOdd(int nums[], int n)
{
    int ctr = 0;  
 
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            ctr++;
    }
 
   for (int i = 0; i < ctr; i++)
        nums[i] = 0;
 
   for (int i = ctr; i < n; i++)
        nums[i] = 1;
}
 
int main()
{
    int nums[] = {0, 1, 0, 0 , 1, 1, 1, 0, 1, 0};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    segregateEvenOdd(nums, n);
 
    printf("\nArray after divided: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;     
}