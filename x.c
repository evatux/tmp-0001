#include <stdio.h>

int main(int argc, char **argv) {
    printf("hello %s\n", argc > 1 ? argv[1] : "world");
    return 0;
}
