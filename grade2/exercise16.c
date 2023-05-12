#include <stdio.h>

int main(void)
{
    int res;

    printf("整数を入力してください。\n");

    scanf("%d", &res);

    if (res >= 31)
    {
        printf("入力値%dは31以上の整数です。\n", res);
    }
    else if (res >= 21)
    {
        printf("入力値%dは21以上30以下の整数です。\n", res);
    }
    else if (res >= 11)
    {
        printf("入力値%dは11以上20以下の整数です。\n", res);
    }
    else
    {
        printf("入力値%dは10以下の整数です。\n", res);
    }

    return 0;
}