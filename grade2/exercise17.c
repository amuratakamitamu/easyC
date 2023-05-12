#include <stdio.h>

int main(void)
{
    int res;

    printf("整数を入力してください。\n");

    scanf("%d", &res);

    switch (res)
    {
    case 1:
        printf("1が入力されました。\n");
        break;
    case 2:
        printf("2が入力されました。\n");
        break;
    default:
        printf("1か2を入力してください。\n");
        break;
    }

    return 0;
}