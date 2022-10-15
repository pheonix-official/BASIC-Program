#include<stdio.h>
#include<stdlib.h>
int main()
{
  int * ptr;
  int n,i;
  printf("Enter no of elements : \n");
  scanf("%d",&n);
  ptr =(int *)malloc(n * sizeof(int))
  if(ptr==NULL)
    printf("Memory not allocated\n");
    exit(0);
  else
  {
    printf("Memory allocated Sccessfully\n");
    for(i=0;i<n;i++)
    {
      printf("Enter %d element",i+1);
      scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
      printf("%d ",ptr[i]);
    }
  }
  return 0;
}
