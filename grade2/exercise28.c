#include <stdio.h>

int main(void)
{
    int test[5] = {80, 60, 22};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("配列a[%d]に代入された値は%dです。\n", i, test[i]);
    }

    return 0;
}