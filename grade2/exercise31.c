#include <stdio.h>

int main(void)
{
    char str[100];
    int i;

    printf("文字列を入力してください。\n");

    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; ++i)
        ;

    printf("入力した文字列は%sです。\n", str);
    printf("入力した文字列は%d文字です。\n", i);
}