#include <stdio.h>

double a;
int b;

double power(double a, int b)
{
    double c = 1.0;
    int i;

    for (i = 0; i < b; i++)
    {
        c = c * a;
    }

    return c;
}

int main(void)
{
    double ans;

    printf("任意の小数(a)を入力してください。\n");
    scanf("%lf", &a);
    printf("任意の自然数(b)を入力してください。\n");
    scanf("%d", &b);

    ans = power(a, b);
    printf("aのb乗は%lfです。\n", ans);
}