#include <stdio.h>
#define NUM 5

int main(void)
{
    int test[NUM] = {80, 60, 22, 50, 75};
    int i;
    int sum = 0;
    double avg;

    for (i = 0; i < NUM; i++)
    {
        printf("%d番目の人の点数は%dです。\n", i + 1, test[i]);
    }

    avg = (double)sum / NUM;
    printf("平均点は%dです。\n", avg);

    return 0;
}
