#ifndef SORT_HPP
#define SORT_HPP

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
void insertionSortDescendingRecursive(T array[], size_t size, size_t start) {
  if(start >= size - 1) return;
  else {
    insertInAscending(array,size,start);
    insertionSortAscendingRecursive(array,size,start+1);
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

#endif
