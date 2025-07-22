#include <stdio.h>

float calculate_price(float record_base_price, float markup_percent) {
    return record_base_price * (1 + markup_percent / 100);
}

void print_record(const char record_artist[], const char record_title[], int record_year, float final_price) {
    printf("%s – %s (%d)\n", record_artist, record_title, record_year);
    printf("Price: %.2f $\n", final_price);
}

int main() {
    const float markup_percent = 30.0f;

    char record_artist[] = "The Beatles";
    char record_title[] = "Abbey Road Anniversary";
    int record_year = 2019;
    float record_base_price = 17.1f;

    float final_price = calculate_price(record_base_price, markup_percent);

    printf("Records in stock\n\n");
    print_record(record_artist, record_title, record_year, final_price);
    return 0;
}