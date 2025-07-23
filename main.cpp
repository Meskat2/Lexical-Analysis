#include <iostream>
#include <string.h>

using namespace std;

int isNumeric(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int main() {
    char input[100];
    printf("Enter input: ");
    scanf("%s", input);

    if (isNumeric(input))
        printf("Numeric constant\n");
    else
        printf("Not numeric\n");

    return 0;
}
