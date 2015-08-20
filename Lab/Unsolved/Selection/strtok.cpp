#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "1122334455";
	char *token;
	char *delim = "3";

	token = strtok(str, delim);
	puts(token);
	token = strtok(NULL, delim);
	puts(token);

    return 0;
}

