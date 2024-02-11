#include <stdio.h>

int main() {
    
    int price;
    int qty;
    
    

    printf("Enter price:");
    scanf("%d", &price);

    printf("Enter qty:");
    scanf("%d", &qty);

    if (qty >= 1000) {

        int discount_amount = price * qty * 90/100;
        printf("Your total price is %d", discount_amount);
    }

    else {

        int amount = price * qty;
        printf("Your total price is %d", amount);

    }

    return 0 ;
}