#include <stdio.h>

int main(void)
{
    int a;
    int *pA;

    a = 5;
    pA = &a;

    printf("変数aの値は%dです。\n", a);

    *pA = 50;

    printf("*pAに50を代入しました。\n");
    printf("変数aの値は%dです。\n", a);

    return 0;
}

// ポインタ変数pAに変数aを代入し、その後*pAが指し示す変数aに50を代入する処理である。