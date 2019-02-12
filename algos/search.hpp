#ifndef SEARCH_HPP
#define SEARCH_HPP

template <typename T>
size_t linearSearch(T array[],size_t size,T key) {
  size_t pos = 0;
  bool found = false;

  for(size_t i = 0; i < size; i++) {
    if(array[i] == key) {
      pos = i; found = true;
    } else continue;
  }

  if(found == false) pos = -1;
  return pos;
}

template <typename T>
size_t binarySearch(T array[], size_t size,T key) {
  size_t pos = 0;
  bool found = false;

  size_t mid = size/2;

  if(array[mid] > key) {
    for(size_t i = mid+1; i < size; i++) {
      if(array[i] == key) {
        found = true;
        pos = i;
      } else continue;
    }
  } else if(array[mid] < key) {
    for(size_t j = 0; j < mid; j++) {
      if(array[j] == key) {
        found = true;
        pos = j;
      } else continue;
    }
  } else if(array[mid] == key) {
    found = true;
    pos = mid;
  }

  if(found == false) pos = -1;
  return pos;
}

template <typename T>
size_t binarySearchRecursive(T array[], size_t key, size_t left, size_t right) {
  size_t mid = (left + right)/2;

  if(array[mid] == key) return mid;
  else if(array[mid] > key) binarySearchRecursive(array,key,mid + 1, (left + right));
  else if(array[mid] < key) binarySearchRecursive(array,key, 0, mid);
  else return -1;
}

#endif
