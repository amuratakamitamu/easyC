#include <stdio.h>

void swap(int *x, int *y);
void sort3(int *n1, int *n2, int *n3);

int main(void)
{
    int a, b, c;

    puts("3つの整数を入力せよ。");
    printf("整数A:");
    scanf("%d", &a);
    printf("整数B:");
    scanf("%d", &b);
    printf("整数C:");
    scanf("%d", &c);

    sort3(&a, &b, &c);

    puts("昇順にソートしました。\n");
    printf("整数Aは%dです。\n", a);
    printf("整数Bは%dです。\n", b);
    printf("整数Cは%dです。\n", c);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//*n1<=*n2<=*n3となるようにソート//
void sort3(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2)
        swap(n1, n2);
    if (*n2 > *n3)
        swap(n1, n2);
    if (*n1 > *n2)
        swap(n1, n2);
}