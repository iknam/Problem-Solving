#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	vector<int> data(1000000000);

	stringstream ss(str);
	char ch;
	int i = 0;

	while (!ss.eof())
	{
		ss >> data[i] >> ch;
		i++;
	}
	
	data.resize(i);
	
	return data;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}
