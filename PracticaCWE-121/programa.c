#include <stdio.h>

int main() {
    int cookie;
    char buffer[10];

    printf("buf: %08x cookie: %08x\n", &buffer, &cookie);
    gets(buffer);

    if (cookie == 0x000d0a00) {
        printf("Ganaste Mauricio!\n");
    }
}