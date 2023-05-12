#include <stdio.h>

int main(void)
{
    int n, i, j;
    n = 0;
    i = 0;
    j = 0;
    printf("整数を入力してください。\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}