#include <stdio.h>

int main(void)
{
    double dnum1, dnum2;
    int inum1, inum2;

    dnum1 = 160.3;
    dnum2 = 160.8;

    printf("dnum1=%f\n", dnum1);
    printf("dnum2=%f\n", dnum2);

    printf("int型の変数に代入します。\n");

    inum1 = dnum1;
    inum2 = dnum2;

    printf("inum1=%d\n", inum1);
    printf("inum2=%d\n", inum2);

    return 0;
}