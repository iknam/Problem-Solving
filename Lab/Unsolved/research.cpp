#include <iostream>

using namespace std;

int main()
{
	int	i, cnt = 0;

	for(i = 0; i < 10; ++i) {
		cnt += i % 2 == 0;
	}

	cout << cnt;

	return 0;
}
