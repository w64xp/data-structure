#include <stdio.h>

int swap(int *a, int *b, int *c, int *d, int *e, int *f, int *g, int *h, int *i, int *j)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = *e;
    *e = *f;
    *f = *g;
    *g = *h;
    *h = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("input data a - j : ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j );
    // ก่อน swap
    printf("before swap: a=%d b=%d c=%d d=%d e=%d f=%d g=%d h=%d i=%d j=%d \n", a,b,c,d,e,f,g,h,i,j);
    // หลัง swap
    swap(&a, &b, &c, &d, &e, &f, &g, &h, &i, &j );
    printf("after swap: a=%d b=%d c=%d d=%d e=%d f=%d g=%d h=%d i=%d j=%d \n", a,b,c,d,e,f,g,h,i,j);

    return 0;
}