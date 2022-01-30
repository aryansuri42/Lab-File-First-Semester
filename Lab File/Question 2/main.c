#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=0,n,len=0,j,numarray[10];
    printf("Enter the number: ");
    scanf(" %d",&a);
    while(a!=0){
        n=a%10;
        a=a/10;
        len++;
        numarray[i]=n;
        i++;
    }
    for(n=len-1;n>=0;n--){
        for(j=n;j>=0;j--){
            printf("%d",numarray[j]);
        }
        printf("\n");
    }
    return 0;
}
