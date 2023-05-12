#include <stdio.h>

char num;

char parrot(num)
{
    printf("%c", num);
}

int main(void)
{
    printf("任意の1文字を入力してください。\n");
    scanf("%c", num);
    parrot(num);
    return 0;
}