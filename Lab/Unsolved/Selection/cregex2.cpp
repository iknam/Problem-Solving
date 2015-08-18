#include <regex.h>
#include <stdio.h>

int main() 
{
  int r;
  regex_t reg;

  if (r = regcomp(&reg, "\\b[a-z]", REG_NOSUB | REG_EXTENDED)) 
  {
    char errbuf[1024];

    regerror(r, &reg, errbuf, sizeof(errbuf));
    printf("error: %s\n", errbuf);

    return 1;
  }

  char* argv[] = { "Moo", "foo", "OlOlo", "ZaooZA~!" };

  for (int i = 0; i < sizeof(argv) / sizeof(char*); i++) 
  {
    if (regexec(&reg, argv[i], 0, NULL, 0) == REG_NOMATCH)
      continue;

    printf("matched: %s\n", argv[i]);
  }

  return 0;
}
