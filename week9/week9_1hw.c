#include <stdio.h>
#include <math.h>

int cal(int a, int b, int *add, int *sub, int *mul, float *div, int *pw)
{
    *add = a + b;
    *sub = a - b;
    *mul = a * b;
    *div = ((float)a / b); // บังคับให้หารเป็นทศนิยม
    *pw = pow(a, b);
    return 0;
}

int main()
{
    int a, b;
    int ad, sb, mu, pw;
    float d; // ใช้ float เก็บผลหาร
    int choice;

    // เริ่มโปรแกรมด้วยลูปใหญ่
    do
    {
        printf("\nInput a, b: ");
        if (scanf("%d %d", &a, &b) != 2)
        {
            printf("Invalid input.\n");
            return 1;
        }

        // ลูปเมนูคำนวณ
        do
        {
            printf("\n=== Menu ===\n");
            printf("0. Input new numbers\n");
            printf("1. Add (a + b)\n");
            printf("2. Subtract (a - b)\n");
            printf("3. Multiply (a * b)\n");
            printf("4. Divide (a / b)\n");
            printf("5. Power (a ^ b)\n");
            printf("6. Exit\n");
            printf("Enter your choice: ");
            if (scanf("%d", &choice) != 1)
            {
                printf("Invalid choice.\n");
                return 1;
            }

            switch (choice)
            {
            case 0:
                // ออกจากลูปเมนู เพื่อกรอกค่าใหม่
                break;
            case 1:
                cal(a, b, &ad, &sb, &mu, &d, &pw);
                printf("Add = %d\n", ad);
                break;
            case 2:
                cal(a, b, &ad, &sb, &mu, &d, &pw);
                printf("Subtract = %d\n", sb);
                break;
            case 3:
                cal(a, b, &ad, &sb, &mu, &d, &pw);
                printf("Multiply = %d\n", mu);
                break;
            case 4:
                cal(a, b, &ad, &sb, &mu, &d, &pw);
                if (isnan(d))
                {
                    printf("Divide = undefined (division by zero)\n");
                }
                else
                {
                    printf("Divide = %.2f\n", d);
                }
                break;
            case 5:
                cal(a, b, &ad, &sb, &mu, &d, &pw);
                printf("Power = %d\n", pw);
                break;
            case 6:
                printf("Exit....\n");
                break;
            default:
                printf("Please choose 0 - 6.\n");
                break;
            }

        } while (choice != 0 && choice != 6);

    } while (choice != 6);

    return 0;
}
