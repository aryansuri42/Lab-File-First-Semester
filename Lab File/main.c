#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fpn;
    printf("Enter the number: ");
    scanf(" %f", &fpn);
    int int_float = (int)fpn;
    int last_digit = int_float%10;
    printf("The last digit of the floating point number is : %d",last_digit);
    return 0;
}
