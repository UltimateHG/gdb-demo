#include <stdio.h>
#include <unistd.h>

int printname(char* name) {
    printf("Hello %s\n", name);
    return 0;
}

int main() {
    char input[100];
    printf("What is your name?\n");
    read(STDIN_FILENO, input, 100);
    printname(input);
    return 0;
}

