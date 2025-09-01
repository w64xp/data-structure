#include <stdio.h>

int calculate(int a, int b, int c, int d, int *add, int *min, int *mul, float *div){
    *add = a + b + c + d;
    *min = a - b - c - d;
    *mul = a * b * c * d;
    *div = ((float)a / b / c / d);  // บังคับให้หารเป็นทศนิยม
    return 0;
}

int main(){
    int w, x, y, z;
    int a, mi, mu;
    float d;  // ใช้ float เก็บผลหาร

    printf("input w, x, y, z: ");
    scanf("%d %d %d %d", &w, &x, &y, &z);
    calculate(w, x, y, z, &a, &mi, &mu, &d);

    printf("add = %d\nminus = %d\nmultiply = %d\ndivide = %.2f\n", a, mi, mu, d);
    // %.2f แสดงทศนิยม 2 หลัก

    return 0;
}
    