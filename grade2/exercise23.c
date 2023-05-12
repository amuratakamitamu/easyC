#include <stdio.h>

int main(void)
{
    int i = 1;

    do
    {
        printf("%d番目の繰り返しです。\n", i);
        i++;
    } while (i <= 5);

    printf("繰り返しが終わりました。");

    return 0;
}