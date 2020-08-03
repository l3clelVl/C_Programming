#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Color[15];
    char PluralNoun[15];
    char Celebrity[15];

    printf("What\'s your favorite color?\n");
    scanf("%s", Color);
    printf("Enter a plural noun:\n");
    scanf("%s", PluralNoun);
    printf("Enter a celebrity:\n");
    scanf("%s", Celebrity);


    printf("Roses are %s\n", Color);
    printf("%s are blue\n", PluralNoun);
    printf("%s pities the foo\n", Celebrity);

    return 0;
}
