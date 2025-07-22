#include <stdio.h>

void print_table(){
    for (int row = 1; row <= 10; row++){
        for (int col = 1; col <= 10; col++) {
            printf("%4d", col * row);
        }
    printf("\n");
    }
}

int main() {
    printf("Multiplication Table 10x10\n\n");
    print_table();
    return 0;
}