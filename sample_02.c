#include <stdio.h>

int main()
{
    /* 変数・配列・ポインタの宣言 */
    char txt[31];
    char *pt;
    int i;

    printf("文字を入力してください。\n");
    scanf( "%s" , txt );

    pt = txt;
    /* ポインタの場所を文字の最終アドレスまで切り替え */
    for( i = 0 ; *pt != '\0' ; i++ )
        pt++;

    /* カウントした数を出力 */
    printf("文字数は%d\n", i);

    return 0;
}
