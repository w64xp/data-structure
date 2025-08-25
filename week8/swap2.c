#include <stdio.h>

int swap(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int x, y, z;
    printf("input data x and y and z : ");
    scanf("%d %d %d", &x, &y, &z);
    // ก่อน swap
    printf("before swap: x=%d, y=%d z=%d\n", x, y, z);
    // หลัง swap
    swap(&x, &y, &z);
    printf("after swap: x=%d, y=%d z=%d\n", x, y, z);

    return 0;
}