#include <stdio.h>
#include <stdlib.h>

void main()

{
    int x = 10;
    int y = 2;
    int a = x + y;

    int *ptrx = &x;
    int *ptry = &y;

    printf("Hello world!\n");

    if (ptrx == &x){   // outputs yes
        printf("'ptrx == &x'");
        printf("\n");

    }

    printf("value of x: %d\n",x);
    printf("pointer of x: %p\n",ptrx); // outputs pointer
    printf("unpacked pointer of x: %d\n",*ptrx); // unpack pointer

    printf("%d",a);
}
