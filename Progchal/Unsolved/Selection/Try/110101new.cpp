#include <iostream>

using namespace std;

int main(void) {
	long long int n1, n2, count=0, value, ans = 0;
	int temp;
	string str;

	while(getline(cin, str)) // str divide n1 and n2 skip space
	{
		if(n1>n2){
			n1 = n1 ^ n2;
			n2 = n1 ^ n2;
			n1 = n1 ^ n2;
		}

		temp = n1;

		for(;n1<=n2;n1++){
			value = n1;
			while(value != 1){
				if(value%2 == 0){
					value /= 2;
					count++;
				} else {
					value = value*3+1;
					count++;
				}
			}
			ans = max(ans, count+1);
			count=0;
		}
		cout << temp << " " << n2 << " " << ans << endl;
		ans = 0;
	}
}
