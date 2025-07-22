#include <stdio.h>

int main() {
    const float markup_percent = 30.0;

    char record_title[] = "Abbey Road Anniversary";
    char record_artist[] = "The Beatles";
    int record_year = 2019;
    float record_purchace_price = 17.1;

    float final_price = 
    record_purchace_price * (1 + markup_percent / 100);

    printf("Records in stock\n\n");

    printf("01. %s – %s (%i)\n", record_artist, record_title, record_year);
    printf("Price: %.2f$\n", final_price);

    return 0;
}