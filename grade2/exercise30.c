#include <stdio.h>

int main(void)
{
    int i;
    int test[][5] = {
        {80, 60, 22, 50, 75}, {90, 55, 68, 72, 58}};

    for (i = 0; i < 5; i++)
    {
        printf("%d番目の人の国語の点数は%dです。\n", i + 1, test[0][i]);
        printf("%d番目の人の数学の点数は%dです。\n", i + 1, test[1][i]);
    }

    return 0;
}
