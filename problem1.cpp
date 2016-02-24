#include "problem1.h"

Problem1::Problem1 () {
}

Problem1::~Problem1 () {
}

float Problem1::exponent (float x, float n) const {
  if (n >= 1) return x * exponent(x, n-1);
  else return 1;
}
