#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    // ก่อน swap
    printf("before swap: x=%d, y=%d\n", x, y);
    // หลัง swap
    swap(&x, &y);
    printf("after swap: x=%d, y=%d\n", x, y);

    return 0;
}

// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooo          oooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooo        oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooo      oooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         ooooooooooooooooooooooooooooooooooooooo     ooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         ooooooooooo     ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooo      oooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooo      oooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooo      oooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         ooooooooooooooooooo     ooooooo      oooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooo  oooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         ooooooooooooooooooooo           ooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooo                oooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooo                    oooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         ooooooooooooooooooo                         ooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         ooooooooooooooooooo                                 ooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         ooooooooooooooooooo                 ooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
                            // hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
                            // hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooo                                    oooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world
// hhhhhhhhhhhhhhhhhhhhhhh          eeeeeeeeeeeeeeeeeeee            eeeeelloooooooo         ooo         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo world