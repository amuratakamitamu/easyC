#include <stdio.h>

int main(void)
{
    int res;

    printf("整数を入力してください。\n");

    scanf("%d", &res);

    if (res % 2 == 0)
    {
        printf("入力値の%dは偶数です。\n");
    }
    else
    {
        printf("入力値の%dは偶数です。\n");
    }

    return 0;
}