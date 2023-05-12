#include <stdio.h>

int num1, num2, num3;
int ans;

int max(num1, num2, num3)
{
    int max;

    max = num1;
    if (max < num2)
        max = num2;
    if (max < num3)
        max = num3;

    return max;
}
int main(void)
{
    printf("任意の整数を入力してください(1)\n", num1);
    scanf("%d", &num1);
    printf("任意の整数を入力してください(2)\n", num2);
    scanf("%d", &num2);
    printf("任意の整数を入力してください(3)\n", num3);
    scanf("%d", &num3);

    ans = max(num1, num2, num3);
    printf("入力された整数の最大値は%dです。\n", ans);

    return 0;
}