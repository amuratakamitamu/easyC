#include <stdio.h>
#define MIN(num1, num2, num3) (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3));

int num1, num2, num3, ans;

int main(void)
{
    printf("任意の整数を入力してください。(1)\n");
    scanf("%d", &num1);
    printf("任意の整数を入力してください。(2)\n");
    scanf("%d", &num2);
    printf("任意の整数を入力してください。(3)\n");
    scanf("%d", &num3);

    ans = MIN(num1, num2, num3);
    printf("入力された整数のうち、最小値は%dです。\n", ans);

    return 0;
}