#include <stdio.h>
#include <assert.h>

int foo() { return 1; }

int main(int argc, char **argv) {
    assert(foo() == 1);
    printf("hello %s\n", argc > 1 ? argv[1] : "world");
    return 0;
}
