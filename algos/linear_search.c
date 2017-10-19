#include <stdio.h>
#include <stdlib.h>

void main()
{
 int* a;
 int i,val,n,c=0,pos;
 printf("Enter the size of the array: ");
 scanf("%d",&n); printf("\n");

 a = (int*) calloc(n,sizeof(n));

 printf("Enter the elements: \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n");

 printf("Now enter the number to be searched: ");
 scanf("%d",&val);
 printf("\n");

 int *b;
 for(i=0;i<n;i++)
 {
  b = &a[i];
  if(*b == val)
   { c = 1; pos = i; break; }
  else
   { c = 0; }
 }
 
 if(c == 0)
  printf("Element not found in array.");

 else
  printf("Element found in position %d of array.",pos);
}
