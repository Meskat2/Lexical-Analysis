#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char input[200];
    printf("Enter a line: ");
    fgets(input, sizeof(input), stdin);

    if (input[0] == '/' && input[1] == '/') {
        printf("Single line comment\n");
    }
    else if (input[0] == '/' && input[1] == '*') {
        int len = strlen(input);
        if (input[len - 3] == '*' && input[len - 2] == '/') {
            printf("Multi-line comment\n");
        } else {
            printf("Possibly part of a multi-line comment\n");
        }
    }
    else {
        printf("Not a comment\n");
    }

    return 0;
}
