#include <stdio.h>
#include <unistd.h>

int main() {
    char input[16];
    printf("What is your name?\n");
    read(STDIN_FILENO, input, 100);
    printf("Hello %s", input);
    return 0;
}

