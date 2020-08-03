#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numOfArg = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];
    printf("Number of Args: %d\nArg program name: %s\nArg2 CLI arg:2 %s\n", numOfArg, arg1, arg2);
    return 0;
}
