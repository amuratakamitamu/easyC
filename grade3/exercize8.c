#include <stdio.h>

int a = 0;

int main(void)
{
    int static b = 0;

    printf("%d,%d\n", a, b);
}