#include <stdio.h>
void sort(int arr[], int n)
{
    int i, j, tmp;
    for(i = 0; i < n; ++i)
    {
     for(j = i + 1; j < n; ++j)
     {
         if(arr[i] > arr[j])
         {
             tmp = arr[i];
             arr[i] = arr[j];
             arr[j] = tmp;
         }
     }
 }
}

void main()
{
 int arr[100], n, i;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 for(i = 0; i < n; ++i)
 {
     printf("arr[%d] = ", i);
     scanf("%d", &arr[i]);
 }

 printf("\nThe sorted array is \n");
 sort(arr, n);
 for(i = 0; i < n; ++i)
 {
     printf("%d ", arr[i]);
 }
}
