#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(void) {
    string str = "ab";
    regex reg("a.");
    smatch m;

    if (regex_match(str, m, reg) ) {
        for (auto& sm : m)
            cout << sm << endl;
    }
}
