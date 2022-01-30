#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char k;
    printf("Enter First number: ");
    scanf(" %d", &i);
    printf("Enter Second Number: ");
    scanf(" %d", &j);
    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c", &k);
    switch(k){
    case '+':
        printf("Sum of two numbers entered is: %d", i+j);
        break;
    case '-':
        printf("Difference of two numbers entered is: %d", i-j);
        break;
    case '/':
        printf("Quotient of two numbers entered is: %d", i/j);
        break;
    case '*':
        printf("Multiplication of two numbers entered is: %d", i*j);
        break;
    default:
        printf("Something went wrong try again");
        break;
    }
    return 0;
}
