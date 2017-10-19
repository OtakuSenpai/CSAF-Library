#include <iostream>
#include <random>

using namespace std;

void heapify(int a[],int n,int index){
   int largest = index;
   int l = 2*index +1;
   int r = 2*index +2;
   
   if(l<n && a[l] > a[largest])
      largest = l;
   if(r<n && a[r] > a[largest])
      largest = r;

   if(largest != index)
   {
       swap(a[index],a[largest]);
       heapify(a,n,largest);
   }
}

void heapsort(int a[],int n){
   for(int i = n/2 -1; i>=0;i--)
      heapify(a,n,i);
   for(int i =n-1; i>=0;i--){
      swap(a[0],a[i]);
      heapify(a,i,0);
   }
}

int main(){
   int b = 200000;
   int a[b];
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<int> dis(1,1000);
   for(int i = 0; i<200000; ++i) 
      a[i] = dis(gen);
   cout<<"Few of the elements are:  "; 
   for(int i = 0;i<10;i++) cout<<a[i]<<" "; cout<<endl;
   cout<<"Start...\n";
   heapsort(a,b);
   cout<<"end...\n";
   cout<<"Few of the elements are  :";
   for(int i = 0; i<10;i++) cout<<a[i]<<" "; cout<<endl;
   return 0;
}

