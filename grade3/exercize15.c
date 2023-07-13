#include <stdio.h>

int main(void)
{
    int test[5] = {80, 60, 55, 22, 75};

    printf("test[0]の値は%dです。\n", test[0]);
    printf("test[0]アドレスは%pです。\n", &test[0]);
    printf("testの値は%pです。\n", test);
    printf("test+1の値は%pです。\n", test + 1);

    for (int i = 0; i < 5; i++)
    {
        printf("test+%d=%d\n", i, *(test + i));
    }

    return 0;
}