#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num)
    {
        printf("整数を入力してください。\n");
        scanf("%d", &num);
        printf("%dが入力されました。\n", num);
    }
    printf("繰り返しが終わりました。￥ｎ");

    return 0;
}