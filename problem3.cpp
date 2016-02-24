#include "problem3.h"

Problem3::Problem3 (int n) {
  size = n;
  source = new int [size];
  spare = new int [size];
  destination = new int [size];
  for (int i = 0; i < size; i++) {
    source[i] = n - i;
  }
}

Problem3::~Problem3 () {
  delete [] source;
  delete [] spare;
  delete [] destination;
}

int Problem3::getSize () {
  return size;
}

int Problem3::get ( int x, int y ) {
  switch (x) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    default:
      return 0;
  }
  return 0;
}

int Problem3::play () {
  return 0;
}
