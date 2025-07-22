#include <stdio.h>

float calculate_price(float record_base_price, float markup_percent) {

    return record_base_price * (1 + markup_percent / 100.00f);

}

void print_record(int index,
    const char record_artist[], const char record_title[], 
    int record_year, float final_price) {

    printf("%02d. %s – %s (%4d)\n", 
        index, record_artist, record_title, record_year);
    printf("Price: %.2f $\n\n", final_price);

}

int main() {
    const float markup_percent = 30.00f;

    printf("Records in stock\n\n");

    char record_artist1[] = "The Beatles";
    char record_title1[] = "Abbey Road Anniversary";
    int record_year1 = 2019;
    float record_base_price1 = 17.68f;

    float final_price1 = calculate_price(record_base_price1, markup_percent);
    print_record(1, record_artist1, record_title1, record_year1, final_price1);

    char record_artist2[] = "Tame Impala";
    char record_title2[] = "Currents";
    int record_year2 = 2019;
    float record_base_price2 = 19.95f;

    float final_price2 = calculate_price(record_base_price2, markup_percent);
    print_record(2, record_artist2, record_title2, record_year2, final_price2);
    return 0;

}