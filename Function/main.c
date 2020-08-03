#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Above\n");
    sayHi("Joe");
    printf("Below\n");
    return 0;
}

void sayHi(char name[]){
    printf("Yo %s\n", name);
}
