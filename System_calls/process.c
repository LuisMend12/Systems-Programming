#include <stdio.h>
#include <stdlib.h>

int val1;
int val2;

int main(int argc, char * argv[]) {
    val1 = atol(argv[1]);
    val2 = atol(argv[2]);

    while (1) {
        printf("Val1: %d \t location %p \t val2: %d \t location %p\n", val1, (void * ) & val1, val2, (void * ) & val2);

    }

    return 0;
}