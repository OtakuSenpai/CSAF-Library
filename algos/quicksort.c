#include <stdio.h>
#include <stdlib.h>

void QuickSort(int left,int right,int size,int* array)
{
 int index = partition(left,right,size,array);
 if(left < (index-1))
  QuickSort(left,(index-1),size,array);
 if(index < right)
  QuickSort(index,right,size,array);
}

int partition(int left,int right,int size,int* array)
{
 int swap,pivot = array[(left+right)/2];
 while(left <= right)
 {
  while(array[left] < pivot)
   left++;
  while(array[right] > pivot)
   right--;
  if(left <= right)
  {
   swap = array[left];
   array[left] = array[right];
   array[right] = swap;
   left++;
   right--;
  }
 } 
  return left; 
}

void main()
{
 int i,n;
 int* a;
 printf("Enter the size of the array: ");
 scanf("%d",&n); printf("\n");
 
 a = (int*) calloc(n,sizeof(int));

 printf("Enter the elements: ");
 for(i=0;i<n;i++) scanf("%d",&a[i]);
 printf("\n");
 
 QuickSort(0,n-1,n,a);
 
 printf("The sorted array is: ");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
