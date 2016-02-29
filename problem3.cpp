#include "problem3.h"

Problem3::Problem3 (int n) {
  hanoi('A', 'C', 'B', n);
}
Problem3::~Problem3 () {
}

void Problem3::hanoi (char source, char dest, char spare, int n) {
	if (n == 1)
	{
		cout << "Move disc " << n << " from "<<  source << " to " << dest << endl;
	}
	else
	{
		hanoi(source, spare, dest, n - 1);
		cout << "Move disc " << n << " from " << source << " to " << dest << endl;
		hanoi(spare, dest, source, n - 1);
	}
}
