#ifndef _PROBLEM3
#define _PROBLEM3

#include <iostream>
using namespace std;

class Problem3 {
  public:
    Problem3 (int);
    ~Problem3 ();
    int get (int x = 0, int y = 0);
    int getSize ();
    int play ();
  private:
    int size;
    int * source;
    int * spare;
    int * destination;
};

#endif
