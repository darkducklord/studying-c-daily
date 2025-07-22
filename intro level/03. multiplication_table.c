#include <stdio.h>

void print_table(){
    const int SIZE = 10;
    
    for (int row = 1; row <= SIZE; row++){
        printf("%4d  |", row);
        for (int col = 1; col <= SIZE; col++) {
            printf("%4d", col * row);
        }
        printf("\n");
    }
}

int main() {
    printf("Multiplication Table\n\n");
    print_table();
    return 0;
}