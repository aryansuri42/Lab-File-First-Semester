#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20;
    int *pt = &x;
    int **pt_pt = &pt;
    printf("The value of x : %d\n",x);
    printf("The value of x by pointer : %d\n",*pt);
    printf("The address of x in unsigned integer form : %u\n",pt);
    printf("The address of x in hexadecimal form : %p\n",pt);
    printf("The value of double pointer of x in unsigned integer form : %u\n",pt_pt);

    return 0;
}
