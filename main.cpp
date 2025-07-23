#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char input[100];
    printf("Enter an expression: ");
    scanf("%s", input);

    printf("Operators found:\n");
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
            input[i] == '/' || input[i] == '%' || input[i] == '=') {
            printf("Operator: %c\n", input[i]);
        }
    }

    return 0;
}
