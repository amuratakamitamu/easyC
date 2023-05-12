#include <stdio.h>

char num;

void parrot(num)
{
    printf("%c\n", num);
}

int main(void)
{
    printf("任意の1文字を入力してください。\n");
    scanf("%c", &num);
    parrot(num);
    return 0;
}