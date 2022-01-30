#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=1, j;
    printf("Enter the number ");
    scanf(" %d", &j);
    if( j<0 ){
        printf("Error Negative Number Entered");
    }
    while(j!=0){
        fact=fact * j;
        j--;
    }
    printf("Factorial = %d", fact);
    return 0;
}
