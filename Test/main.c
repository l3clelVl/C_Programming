#include <stdio.h>
#include <stdlib.h>

/* this shows diff between argc and argv with CLI arguments */
int main(int argc, char *argv[])
{
      int numberOfArgs = argc;
      char *arg1 = argv[0];
      char *arg2 = argv[1];

      printf("Number of Arguments: %d\n", numberOfArgs);
      printf("Arg 1 is the program name: %s\n", arg1);
      printf("Arg 2 is the program name: %s\n", arg2);


      return 0;
}
