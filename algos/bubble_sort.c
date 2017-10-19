#include <stdio.h>
#include <stdlib.h>

void main()
{
 int n,i,j,temp;
 int *a;
 
 printf("Enter the size of the array: ");
 scanf("%d",&n);
 printf("\n");
 
 a = (int*) calloc(n,sizeof(int));
 
 printf("Enter the elements to be sorted: ");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("\n");

 for(i=0;i<n;i++)
  {
   for(j=1;j<(n-i);j++)
   {
    if(a[j-1] > a[j])
    {
     temp = a[j-1];
     a[j-1] = a[j];
     a[j] = temp;
    }
   }
  }
 
 printf("The sorted array is: ");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
