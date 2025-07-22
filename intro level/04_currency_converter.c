#include <stdio.h>

void convert(float amount, float RATE){
    printf("%.2f USD = %.2f EUR", amount, amount*RATE);
}

int main(){
    float amount = 100.00f;
    const float RATE = 0.91f;

    printf("Simple Currency Converter\n\n");
    convert(amount, RATE);
    return 0;
}