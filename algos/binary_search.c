#include <stdio.h>
#include <stdlib.h>

int Bin_Search(int target,int* array,int size)
{
 int high,low=0,mid;
 high = size;
 
 while(low<=high)
 {
  mid = (high+low)/2;
  if(array[mid] < target)
  { 
   low = mid +1;
  }
  else if(array[mid] > target)
  {
   high = mid -1;
  }
  else 
  { return mid; }
 }
}

void main()
{
 int i,n,val,pos=0;
 int *a;
 
 printf("Enter the size of array: ");
 scanf("%d",&n);
 printf("\n");
 
 a = (int*) calloc(n,sizeof(int));
 
 printf("Enter the elements: ");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\n");

 printf("Enter the value to be searched: ");
 scanf("%d",&val);
 
 pos = Bin_Search(val,a,n);
 printf("Found element in position %d.",pos);
}

