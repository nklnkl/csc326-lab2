#ifndef _PROBLEM2
#define _PROBLEM2
using namespace std;

class Problem2 {
  public:
    Problem2(int = 5);
    ~Problem2();

    // The rest of these are used for problem2
    bool insert(int);
    // Sorts 'arr' into 'sorted'.
    void sort(int i = 0);
    // Get an element from the array.
    int get(int x = 0) const;
    int getSize() const;
    int getMax() const;
  private:
    // The array for which the user inputs values into.
    int * arr;
    // The array in which input is sorted into.
    int size;
    // The maximum possible amount.
    int max;
};

#endif
