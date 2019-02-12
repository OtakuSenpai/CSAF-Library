#include <iostream>
#include <random>
#include <chrono>
#include "../../algos/search.hpp"

using namespace std;

int main() {
  // 1 million
  int array[1000000];
  cout << "Initialising array of size 1 million...\n";

  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1,1000000);
  for(int i = 0; i < 1000000; i++)
    array[i] = dis(gen);

  cout << "Starting Linear Search test" << endl;

  auto timeStart = std::chrono::steady_clock::now();
  auto posL = linearSearch(array,1000000,1991);
  auto timeEnd = std::chrono::steady_clock::now();

  auto durationL = timeStart - timeEnd;
  cout << "Time taken for linear search is: "
       << durationL.count() << endl << "Position is: " << posL << endl;

  cout << "Starting Binary Search Test" << endl;
  timeStart = std::chrono::steady_clock::now();
  auto binaryPos = binarySearch(array,1000000,1991);
  timeEnd = std::chrono::steady_clock::now();

  auto durationBS = timeStart - timeEnd;
  cout << "Time taken for binary search is: " << durationBS.count() << endl
       << "Position is: " << binaryPos << endl;

  cout << "Starting Binary Search Recursive Test" << endl;
  timeStart = std::chrono::steady_clock::now();
  auto binaryPosR = binarySearch(array,1000000,1991);
  timeEnd = std::chrono::steady_clock::now();

  auto durationBSR = timeStart - timeEnd;
  cout << "Time taken for binary search is: " << durationBSR.count() << endl
       << "Position is: " << binaryPosR << endl;

  return 0;
}


