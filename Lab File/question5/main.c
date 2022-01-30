#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,angle,sum=0;
    for(i=1;i<=3;i++){
        printf("Enter the %d Angle of triangle: ",i);
        scanf(" %d", &angle);
        sum+=angle;
    }
    if(sum==180){
        printf("Valid Triangle");
    }
    else{
        printf("Triangle can't be formed");
    }
    return 0;
}
