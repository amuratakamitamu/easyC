#include <stdio.h>

int main(void)
{
    int test[5] = {80, 60, 55, 22, 75};

    for (int i = 0; i < 5; i++)
    {
        printf("test[%d]のアドレスは%pです。\n", i, &test[i]);
    }

    return 0;
}