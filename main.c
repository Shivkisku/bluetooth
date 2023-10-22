#include <stdio.h>

int main() {
    int i, j;
    char k = 222;

    printf("\n");

    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            if ((i - j == 0 && i < 9 && i > 0) || (i + j == 10 && i > 1 && i < 10) || j == 5 || (i + j == 16 && i > 7) || (j - i == 6 && j < 8)) {
                printf("%c", k);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
