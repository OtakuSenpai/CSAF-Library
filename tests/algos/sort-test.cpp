#include <iostream>

#include "../../algos/sort.hpp"

using namespace std;

int main() {
  int array[] = {1,5,3,6,12,75,32,21,43};
  int output[9];

  cout << "Starting merge sort test..." << endl;

  mergeSort(array,0,9,output);

  for(int i = 0; i < 9; i++)
    cout << output[i] << " ";
  cout << endl;
  return 0;
}
