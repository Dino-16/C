#include <stdio.h>

int main() {
    float item_price = 99.99;
    int quantity = 3;
    float discount;
    float total_cost;
    float total_amount;

    total_cost = item_price * quantity;
    discount = total_cost * 0.10;
    total_amount = total_cost - discount;

    printf("The total amount is: %.2f", total_amount);

    return 0;
}