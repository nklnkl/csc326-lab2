#include "problem2.h"

Problem2::Problem2 (int m) {
  max = m;
  arr = new int [max];
  size = 0;
}

Problem2::~Problem2 () {
  delete [] arr;
}

// Used for problem 1.
int Problem2::exponent (int x, int n) const {
  if (n >= 1) return x * exponent(x, n-1);
  else return 1;
}

int Problem2::get (int x) const {
  return arr[x];
}

int Problem2::getSize () const {
  return size;
}

int Problem2::getMax () const {
  return max;
}

bool Problem2::insert (int x) {
  if ( size < max ) {
    arr[size] = x;
    size++;
    return true;
  } else {
    return false;
  }
}

void Problem2::sort(int i) {

  // If we have surpassed the number of elements.
  if (i > size-1) {
    return;
  }

  // While we haven't reached the zero element yet.
  for (int j = i; j > 0; j--) {
    // If current is lower than previous.
    if ( arr[j] < arr[j-1] ) {
      // Cache the current..
      int low = arr[j];
      // Set the current element to the previous.
      arr[j] = arr[j-1];
      // Set the previous to the cache
      arr[j-1] = low;
    // If current is now lower than the previous
    } else {
      // Set j to 0 to exit loop going back.
      j = 0;
    }
  }

  // Start the sort again with the next element.
  sort(i + 1);
}
