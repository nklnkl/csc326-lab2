#include "problem1.cpp"
#include "problem2.cpp"
#include "problem3.cpp"
#include <iostream>
using namespace std;

int problem1();
int problem2();
int problem3();

int main () {
  int command = 0;
  cout << "\n1) Problem 1\n2) Problem 2\n3) Problem 3\n4) Exit\nInput: ";
  cin >> command;

  switch (command) {
    case 1: problem1();
      break;
    case 2: problem2();
      break;
    case 3: problem3();
      break;
    case 4: return 0;
      break;
    default: main();
  }
  main();
}

int problem1() {
  float base = 0;
  float exp = 0;
  Problem1 input;

  cout << "Base: ";
  cin >> base;
  cout << "Exponent: ";
  cin >> exp;

  cout << "Result: "<< input.exponent(base,exp) << endl;
  return 0;
}

int problem2() {
  int command = 0;

  cout << "Number of elements: ";
  cin >> command;
  Problem2 input(command);

  // Loop to accept elements.
  for( int i = 0; i < input.getMax(); i++) {
    cout << "Element " << i << ": ";
    cin >> command;
    input.insert(command);
  }

  // Loop to print elements.
  cout << "Set: ";
  for (int i = 0; i < input.getSize(); i++) {
    cout << input.get(i) << " ";
  }
  cout << endl;

  // Sort the elements.
  input.sort();

  // Loop to print sorted elements.
  cout << "Sorted: ";
  for (int i = 0; i < input.getSize(); i++) {
    cout << input.get(i) << " ";
  }
  cout << endl;

  return 0;
}

int problem3() {
  int n;
  cout << "Enter the discs from the source to be moved to the destination. " << endl;
  cin >> n;
  Problem3 hanoi(n);
  return 0;
}
