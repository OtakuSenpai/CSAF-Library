#include <stdio.h>
#include <stdlib.h>

void main()
{
 int n,i,j,pos,swap;
 int *a;
 
 printf("Enter the size of the array: ");
 scanf("%d",&n);
 printf("\n");
 
 a = (int*) calloc(n,sizeof(int));
 
 printf("Enter the elements to be sorted: ");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\n");
  
 for(i=0;i<(n-1);i++)
 {
  pos = i;
  
  for(j=i+1;j<n;j++)
  {
   if( a[pos] > a[j] )
    { pos = j; }
  }
  
  if ( pos != i )
  { 
   swap = a[i];
   a[i] = a[pos];
   a[pos] = swap;
  }
 }
 
 printf("The sorted array is: ");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
