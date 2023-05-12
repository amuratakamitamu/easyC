#include <stdio.h>

int main(void)
{
    int i;
    int input;

    printf("整数を入力してください\n");
    scanf("%d", &input);
    printf("入力値=%d\n", input);

    printf("カウントアップ開始\n");

    for (i = 1; i <= input; i++)
    {
        printf("%d\n", i);
    }

    printf("カウントアップ終了\n");

    return 0;
}