#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DISPLAY(x) printf("name: "#x", value: %d, address: %p\n ",x,&x);
#define SKIP
#define CZAS printf("%s\n",__DATE__);
int main(int argc, char *argv[]) {
    int x=10;
    DISPLAY(x);
#ifndef SKIP 
    puts("LALALA");
    puts("lelele");
    puts("ojejej");
#endif
    CZAS
}
