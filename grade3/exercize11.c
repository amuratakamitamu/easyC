#include <stdio.h>

int main(void)
{
    double a, b;
    double *pA;

    a = 5.0;
    b = 10.0;

    pA = &a;

    printf("変数aの値は%lfです。\n", a);
    printf("変数aのアドレスは%pです。\n", &a);
    printf("ポインタpAの値は%pです。\n", pA);
    printf("pAの値は%lfです。\n", *pA);
    printf("ポインタpAのアドレスは%pです。\n", &pA);

    pA = &b;

    printf("変数bの値は%lfです。\n", b);
    printf("変数bのアドレスは%pです。\n", &b);
    printf("ポインタpAの値は%pに変更されました。\n", pA);
    printf("pAの値は%lfです。\n", *pA);
    printf("ポインタpAのアドレスは%pです。\n", &pA);

    return 0;
}
