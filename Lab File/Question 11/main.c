#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,i,sum=0;
    while(a!=0){
        printf("Enter the number: ");
        scanf(" %d",&a);
        sum+=a;
        i++;
    }
    printf("Sum of numbers until 0 was entered: %d",sum);
    return 0;
}
