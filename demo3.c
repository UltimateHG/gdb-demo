#include <stdio.h>
#include <unistd.h>

int main() {
    char* input[16];
    printf("What is your name?\n");
    read(stdin, input, 100);
    printf("Hello %s!\n", input);
    return 0;
}