#include <stdio.h>
int main(void)
{
    int a;
    char b;
    double c;

    a = 5;
    b = 'x';
    c = 3.14;

    printf("変数aの値は%dです。\n", a);
    printf("変数aのアドレスは%pです。\n", &a);
    printf("変数bの値は%cです。\n", b);
    printf("変数bのアドレスは%pです。\n", &b);
    printf("変数cの値は%lfです。\n", c);
    printf("変数cのアドレスは%pです。\n", &c);

    return 0;
}
