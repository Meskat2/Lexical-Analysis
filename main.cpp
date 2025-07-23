#include <iostream>
#include <string.h>

using namespace std;

int isIdentifier(char str[]) {
    if (!isalpha(str[0]) && str[0] != '_')
        return 0;

    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_')
            return 0;
    }

    return 1;
}

int main() {
    char input[100];
    printf("Enter identifier: ");
    scanf("%s", input);

    if (isIdentifier(input))
        printf("Valid Identifier\n");
    else
        printf("Not a valid Identifier\n");

    return 0;
}
