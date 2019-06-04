#include <stdio.h>

int main()
{
    int i;

    /* ポインタの宣言 */
    int *pt;

    /* ポインタにアドレスを代入 */
    pt = &i;

    /* 指定アドレスに数値を代入 */
    *pt = 1;

    printf("iの数値：%d\n" , i);
    printf("*ptの数値：%d\n" , *pt);
    printf("iのアドレス：%p\n" , &i);
    printf("ptの数値：%p\n" , pt);
    /*  %p：アドレスを出力する指定子 */

    return 0;
}
