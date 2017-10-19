#include <stdio.h>
#include <stdlib.h>

void merging(int* a,int* b,int size,int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int* a,int* b,int size,int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(a,b,size,low, mid);
      sort(a,b,size,mid+1, high);
      merging(a,b,size,low, mid, high);
   } else { 
      return;
   }   
}

void MergeSort(int size,int* array)
{
 int* a = (int*) calloc(size,sizeof(int));
 sort(array,a,size,0,size-1);
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

 MergeSort(n,a);
 printf("The sorted array is: ");
 for(i=0;i<n;i++) printf("%d ",a[i]);
}
