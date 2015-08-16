#include <iostream>
#include <regex.h>

using namespace std;

int posix_regex_match( char* regex, char* input )
{
    if( regex == NULL || input == NULL )
        return -1;

    regex_t ext_regex;
    int ret = regcomp(&ext_regex, regex, REG_EXTENDED);

    if( ret != 0 )
    {
        return 0;
    }

    ret = regexec( &ext_regex, input, 0, NULL, 0);
    regfree(&ext_regex);
    return (!ret);
}

int main(int argc, char** argv)
{
    posix_regex_match( argv[1],argv[2]);
    return 0;
}
