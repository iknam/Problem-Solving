#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	vector<int> data(100);

	stringstream ss(str);
	char ch;
	int i = 0;
	
	data[0] = ss >> data;

	while (!ss.eof())
	{
		ss >> data[i];
		//modify
		if (ch != EOF) ss >> ch;
		i++;
	}
	
	i = 0;
	
	while (data[i] != 0)
	{
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
