#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price;
    int qty;
    printf("Enter the Price per Quantity: ");
    scanf(" %f",&price);
    printf("Enter the purchased Quantity: ");
    scanf(" %d",&qty);
    if(qty<100 && qty>0 && price>0){
        float total_amt=qty*price;
        printf("Your total amount is : %f INR", total_amt);
    }
    else if(qty>1000 && price>0){
        float total_amt = qty*price;
        float off = total_amt/10;
        printf("Your total amount is : %f INR", total_amt - off);
    }
    else{
        printf("Enter correct price and quantity");
    }
    return 0;
}
