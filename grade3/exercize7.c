#include <stdio.h>

void func(void); // プロトタイプ宣言

int a = 0;

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        func();
    }

    return 0;
}

void func(void)
{
    int b = 0;
    static int c = 0;

    printf("変数aは%d変数bは%d変数cは%dです。\n", a, b, c);

    a++;
    b++;
    c++;
}

// 変数cはstatic指定しているため、グローバル変数と同じ記憶寿命を持つのに対して、変数bは指定していないため、func()関数が終了するたびに初期化されるため、出力が全て0になる。