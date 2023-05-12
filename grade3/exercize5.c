#include <stdio.h>

int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main(void)
{
    int n, ans;

    printf("任意の整数(負ではない)を入力してください。\n");
    scanf("%d", &n);

    ans = factorial(n);
    printf("入力された整数の階乗は%dです。\n", ans);

    return 0;
}