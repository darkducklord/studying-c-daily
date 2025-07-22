#include <stdio.h>

int main() {
    int i;
    int n = 1;

    printf("Multiplication Table 10x10\n\n");

    while (n <= 10){
        for (i = 1; i <= 10; i++) {
            printf("%4d", i * n);
        }
        printf("\n");
        n++;
    }

    return 0;
}