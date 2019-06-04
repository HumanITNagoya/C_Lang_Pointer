#include <stdio.h>

int main()
{
    /* 文字配列の定義 */
    char ex[] = "Example";

    /* ポインタの宣言 */
    char *pt;
    pt = ex;

    /* 文字の出力 */
    printf( "2文字目は%c\n" , *(pt+1) );

    pt = ex + 4 ;   /* アドレスを変更 */
    printf( "5文字目は%c\n" , *pt );

    return 0;
}
