#include <stdio.h>

int main(void)
{
    int num, ans;
    int i;

    num = 0;
    ans = 1;
    i = 0;

    printf("いくつまでの積を求めますか？\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        ans = i * ans;
    }

    printf("1から%dまでの階乗は%dです。\n", num, ans);

    return 0;
}