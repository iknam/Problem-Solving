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
	string fac2 = "1";
	string storage = "1";

	/*fac = to_string(ano);
	cout << fac;*/
		//atoi(fac.c_str());
	cin >> N;
	//
	//int *sub = 422343;
	//cout << sub;
	for (i = 1; i <= N; i++)
	{
		//cout << int((fac[i]))*int((fac[i-i])) << endl;
		//if (strlen(to_string(ano)) < 19)
		//{
			 //fac = to_string(i*atoi(fac.c_str()));
		
		//cout << fac << endl;
		if (fac.length() > 9)
		{
			storage = to_string(i * (atoi(fac.c_str())) * atoi(fac.c_str()));
			//fac = "1";
		}
		else
		{ 
			//fac = to_string((atoi(fac2.c_str()) * i) * atoi(fac.c_str()));
			//storage = fac;
		}
		//}
		//string += ano;
		//if (fac.length() < 19)
		//{
			//fac += to_string(i * (i - 1));
		//}
	}
	storage = to_string(21004104200402*349038429849);

	cout << storage;

	//cout << ano;
	return 0;
}
