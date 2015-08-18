#include <iostream>
#include <string>
#include <regex>
 
using namespace std;
 
int main(void) {
    string str = "a=1,b=2,c=3,d=4";
	string str2 = "$2=$1";
        regex reg("([a-z])=([0-9])");
        smatch m;
 
        str = regex_replace(str, reg, str2);
 
        cout << str << endl;
}
