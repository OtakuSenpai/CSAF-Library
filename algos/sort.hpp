#ifndef SORT_HPP
#define SORT_HPP

#include <cstdlib>

template <typename T>
void swapArray(T array[], T left, T right) {
  T temp = array[left];
  array[left] = array[right];
  array[right] = temp;
}


template <typename T>
void insertionSortDescending(T array[],size_t size) {
  size_t nextpos = 0;

  for(size_t i = 0; i < size; i++) {
    nextpos = i;
    while(nextpos > 0 && array[nextpos] > array[nextpos-1]) {
      swapArray(array,array[nextpos],array[nextpos-1]);
      nextpos = nextpos - 1;
    }
  }
}

template <typename T>
void insertionSortDescendingRecursive(T array[], size_t size, size_t start) {
  if(start >= size - 1) return;
  else {
    insertInDescending(array,size,start);
    insertionSortDescendingRecursive(array,size,start+1);
  }
}

template <typename T>
void insertInDescending(T array[], size_t size, size_t start) {
  size_t pos = start;
  while(pos > 0 && array[pos] > array[pos-1]) {
    swapArray(array,size,start);
    pos = pos - 1;
  }
}

template <typename T>
void insertionSortAscending(T array[],size_t size) {
  size_t nextpos = 0;

  for(size_t i = 0; i < size; i++) {
    nextpos = i;
    while(nextpos > 0 && array[nextpos] < array[nextpos-1]) {
      swapArray(array,array[nextpos],array[nextpos-1]);
      nextpos = nextpos - 1;
    }
  }
}

template <typename T>
void insertInAscending(T array[], size_t size, size_t start) {
  size_t pos = start;
  while(pos > 0 && array[pos] < array[pos-1]) {
    swapArray(array,size,start);
    pos = pos - 1;
  }
}

template <typename T>
void selectionSortAscending(T array[], size_t size) {
  size_t temp;
  for(size_t i = 0; i < size; i++) {
    temp = i;
    for(size_t j = temp + 1; j < size; j++) {
      if(array[j] < array[temp])
        temp = j;
    }
    swapArray(array,array[i],array[temp]);
  }
}

template <typename T>
void selectionSortDescending(T array[], size_t size) {
  size_t temp;
  for(size_t i = 0; i < size; i++) {
    temp = i;
    for(size_t j = temp + 1; j < size; j++) {
      if(array[j] > array[temp]) {
        temp = j;
      }
      swapArray(array,array[i],array[temp]);
    }
  }
}

template <typename T>
void mergeAscending(T array1[], size_t sizeArray1, T array2[], size_t sizeArray2,T* total) {
  size_t i = 0,j = 0,k;
  while( k < sizeArray1 + sizeArray2) {
    if(sizeArray1 == i || array1[i] <= array2[j]) {
      total[k] = array1[i];
      j++; k++;
    } else if(sizeArray2 == j || array1[i] > array2[j]) {
      total[k] = array2[j];
      i++; k++;
    }
  }
}

template <typename T>
void mergeSort(T input[], size_t left, size_t right, T* output) {
  if((right - left) == 0) output[0] = input[left];
  else if((right - left + 1) > 1) {
    size_t mid = (left+right - 1)/2;
    T leftArray[mid - left];
    T rightArray[right - mid + 1];
    mergeSort(input,left,mid,leftArray);
    mergeSort(input,mid+1,right,rightArray);
    mergeAscending(leftArray,mid - left,rightArray,right - mid + 1,output);
  }
}

#endif
