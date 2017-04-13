#include <stdio.h>
#include <assert.h>

int bar() { return 1; }
int foo() { return 1; }

int main(int argc, char **argv) {
    assert(foo() == 1);
    assert(bar() == 1);
    printf("hello %s\n", argc > 1 ? argv[1] : "world");
    return 0;
}
