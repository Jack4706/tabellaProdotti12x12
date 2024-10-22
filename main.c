#include <stdio.h>

int main() {

    printf("     ");
    for (int i = 0; i <= 12; i++) {
        printf("%4d", i);
    }
    printf("\n");

    for (int i = 0; i <= 12; i++) {
        printf("%4d ", i);
        for (int j = 0; j <= 12; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}

