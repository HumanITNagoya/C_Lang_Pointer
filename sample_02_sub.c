#include <stdio.h>

int main()
{
    /* 変数・配列・ポインタの宣言 */
    char txt[31];
    char *pt;

    printf("文字を入力してください。\n");
    scanf( "%s" , txt );

    /* ポインタの場所を文字の最終アドレスまで切り替え */
    for( pt=txt ; *pt != '\0' ; pt++ );

    /* 場所の差を引き算で求めて出力 */
    printf("文字数は%ld\n", pt-txt);

    return 0;
}
