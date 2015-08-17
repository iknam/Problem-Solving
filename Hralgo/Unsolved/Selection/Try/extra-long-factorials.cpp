#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	//vector<  > fac;
	int N;
	long long i;
	//char *ano = 13242341431234123412341234411;
	string fac = "1";
	string storage = "";

	/*fac = to_string(ano);
	cout << fac;*/
		//atoi(fac.c_str());
	cin >> N;
	//
	//int *sub = 422343;
	//cout << sub;
	for (i = N; i > 1; i--)
	{
		//cout << int((fac[i]))*int((fac[i-i])) << endl;
		//if (strlen(to_string(ano)) < 19)
		//{
			 //fac = to_string(i*atoi(fac.c_str()));
		fac = to_string(i * atoi(fac.c_str()));
		cout << fac.length() << endl;
		if (fac.length() > 9)
		{
			storage = fac ;
			fac = "";
		}
		//}
		//string += ano;
		//if (fac.length() < 19)
		//{
			//fac += to_string(i * (i - 1));
		//}
	}

	cout << storage;

	//cout << ano;
	return 0;
}
