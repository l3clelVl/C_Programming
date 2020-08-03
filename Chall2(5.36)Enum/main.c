#include <stdio.h>
#include <stdlib.h>

int main()
{
  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

  printf("The value of Google is: %d\n", GOOGLE);
  printf("The value of Facebook is: %d\n", FACEBOOK);
  printf("The value of Xerox is: %d\n", XEROX);
  printf("The value of Yahoo is: %d\n", YAHOO);
  printf("The value of Ebay is: %d\n", EBAY);
  printf("The value of Microsoft is: %d\n", MICROSOFT);

  return 0;
}
