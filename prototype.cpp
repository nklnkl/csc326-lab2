#include <iostream>
using namespace std;

int main()
{
	int n;
	void Hanoi(char source, char dest, char spare, int n);



	system("pause");
	return 0;
}

void Hanoi(char source, char dest, char spare, int n)
{
	if (n == 1)
	{
		cout << "Move disc " << n << " from "<<  source << " to " << dest << endl;
	}
	else
	{
		Hanoi(source, spare, dest, n - 1);
		cout << "Move disc " << n << " from " << source << " to " << dest << endl;

		Hanoi(spare, dest, source, n - 1);

	}
}
