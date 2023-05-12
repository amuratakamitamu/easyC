#include <stdio.h>

// グローバル変数を定義
double r;
double pai = 3.14159265;

// 計算用の関数x4の定義
double length(r)
{
    double l;
    l = 2.0 * pai * r;
    return l;
}
double circle_area(r)
{
    double S;
    S = pai * r * r;
    return S;
}
double surface_area(r)
{
    double S;
    S = 4.0 * pai * r * r;
    return S;
}
double volume(r)
{
    double v;
    v = (4.0 / 3) * pai * r * r * r;
    return v;
}

// main関数
int main(void)
{
    printf("半径値を入力してください。(正の小数)\n");
    scanf("%lf", &r);

    double l, S, S_surface, v;
    l = length(r);
    printf("入力された半径値を持つ円の円周の長さは%lfです。\n", l);
    S = circle_area(r);
    printf("入力された半径値を持つ円の面積は%lfです。\n", S);
    S_surface = surface_area(r);
    printf("入力された半径値を持つ球の表面積は%lfです。\n", S_surface);
    v = volume(r);
    printf("入力された半径値を持つ球の体積は%lfです。\n", v);

    return 0;
}