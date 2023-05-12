#include <stdio.h>

int main(void)
{
    int a[5];
    int i;

    for (int i = 0; i <= 5; i++)
    {
        a[i] = i * 10;
    }
    for (i = 0; i <= 5; i++)
    {
        printf("配列a[%d]に代入された値は%dです。\n", i, a[i]);
    }
    return 0;
}