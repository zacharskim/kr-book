#include <stdio.h>

int main() {
    int c;

    // Verify getchar() != EOF is 0 or 1
    printf("getchar() != EOF: %d\n", c != EOF);

    // Print the value of EOF
    printf("The value of EOF is %d\n", EOF);

    return 0;
}