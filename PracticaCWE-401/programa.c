#include <stdio.h>
#include <stdlib.h>

#define LOOPS 100
#define MAXSIZE 256

int main(int argc, char **argv) {
    int count = 0;
    char *pointer = NULL;

    for (count = 0; count < LOOPS; count++) {
        pointer = (char *)malloc(sizeof(char) * MAXSIZE);
        free(pointer);
    }
    // Versión vulnerable a memory leak:
    // free(pointer);
    return count;
}