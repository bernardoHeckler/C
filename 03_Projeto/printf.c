#include <stdio.h>

int helloworld(char *message) {
    printf("%s\n", message);
    return 0;
}
int main() {
    char *message = "Hello, World!";

    helloworld(message);

    return 0;
}