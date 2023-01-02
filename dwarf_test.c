#include <stdlib.h>
#include <stdio.h>

void other_func(char *msg) {
    puts(msg);
}

int main() {
    other_func("hello world");
    return 0;
}
