// alpha

#include <iostream>

using namespace std;

int main( )
{
	int i, j, k;

	for(k = 0; k < 26; k++) {
		for(j = 0; j < 26; j++) {
			for(i = 0; i < 26; i++) {
				cout << (char)('A' + k) << (char)('A' + j) << (char)('A' + i) << " ";
				if(i == 5)
					return 0;
			}
		}
	}
	return 0;
}



