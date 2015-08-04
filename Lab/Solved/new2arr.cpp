#include <iostream>

using namespace std;

int main()
{
	int (*Array)[7][8] = new int[4][7][8];

	Array[2][2][2] = 5;
	cout << Array[2][2][2];
	delete [] Array;
	cout << Array[2][2][2];

	return 0;   
}

