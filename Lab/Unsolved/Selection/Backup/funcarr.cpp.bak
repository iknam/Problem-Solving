#include <iostream>

using namespace std;

int *foo(int a[]) // *, [] work well
{
	cout << a[2] << endl;
	return &a[1];
}

int main()
{
	int *q, * w, i;
	i = 3;
	q = &i;
	w = &i;

	cout << *q << *w;

	int a[3] = {0, 1, 2};
	//cout << *foo(a);

    return 0;
}

