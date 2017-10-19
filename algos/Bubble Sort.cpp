#include <iostream>

using namespace std;

void BubbleSort(int [],int);

int main()
{
int Ar[50],n,i;
cout<<"Enter the size of the array...\n";
cin>>n;
cout<<"Enter the elements...\n";
for(i=0;i<n;i++)
    cin>>Ar[i];
BubbleSort(Ar,n);
cout<<"\n The sorted array is :\n";
for(i=0;i<n;i++)
    cout<<Ar[i]<<" ";
cout<<endl;
return 0;
}

void BubbleSort(int Ar[],int n)
{
int tmp,c=0;
for(int i=0;i<n;i++)
   {
     for(int j=0;j<(n-1);j++)
     {
       if(Ar[j]>Ar[j+1])
       {
       tmp=Ar[j];
       Ar[j]=Ar[j+1];
       Ar[j+1]=tmp;
       }
     }
     cout<<"Array after iteration-"<<++c<<"-is : \n";
     for(int k=0;k<n;k++)
        cout<<Ar[k]<<" ";
     cout<<endl;
   }
}
