#include <stdio.h>
#include <stdlib.h>

int main()
{
  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

  printf("The value of Google is: %4i\n", GOOGLE);
  printf("The value of Facebook is: %2i\n", FACEBOOK);
  printf("The value of Xerox is: %5i\n", XEROX);
  printf("The value of Yahoo is: %5i\n", YAHOO);
  printf("The value of Ebay is: %6i\n", EBAY);
  printf("The value of Microsoft is: %i\n", MICROSOFT);

  return 0;
}
