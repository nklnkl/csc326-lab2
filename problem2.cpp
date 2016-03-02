#include "problem2.h"

Problem2::Problem2 (int m) {
  max = m;
  arr = new int [max];
  size = 0;
}

Problem2::~Problem2 () {
  delete [] arr;
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

/*
  In this insertion sort, the first iteration is going forward, we keep track
  of the forward iteration using i.
  We bring elements back (sort) as the second iteration as we compare it to the elements
  before. We keep track of this backward iteration using j.
*/
void Problem2::sort (int i, int j) {

  // If we have surpassed the number of elements.
  if (i > size-1) {
    return;
  }
  
  // If going back, the current count is greater than 0.
  if (j > 0) {
    // If the current is lower than a previous element.
    if ( arr[j] < arr[j-1] ) {
      // Cache the current..
      int low = arr[j];
      // Set the current element to the previous.
      arr[j] = arr[j-1];
      // Set the previous to the cache
      arr[j-1] = low;
      // Call sort again, but keep our place, and work on the element before.
      sort(i, j - 1);
    } else {
      // Call sort again, this time with the next element to sort.
      sort(i + 1, i + 1);
    }
  }
  // Else if going back, the current count is 0 or less.
  else {
    // Call sort again, this time with the next element to sort.
    sort(i + 1, i + 1);
  }

}
