#include <stdio.h>

int main()
{
    /* char型ポインタの場合 */
    /* 文字配列の定義 */
    char ex[] = "Example";

    /* ポインタの宣言 */
    char *pt;

    /* 配列の先頭アドレスを変数ptに代入 */
    pt = ex;

    printf( "------char型の配列------\n文字：%s\n" , ex );
    printf("配列の先頭アドレスは%p\n", ex );
    printf("ptの数値は%p\n", pt );

/*  配列の先頭アドレスは以下でも代入できるよ
    pt = &ex[0];

    printf("配列の0番目の場所は%p\n", &ex[0] );
    printf("ptの数値は%p\n", pt );
*/

    pt = ex + 1 ;   /* アドレスの数値を変更 */
    printf( "配列の1番目は%c\n" , *pt );
    printf( "配列の1番目の場所は%p\n" , pt );

   
    /* int型ポインタの場合 */
    /* 配列の宣言・初期化 */ 
    int intgata[5] = {0,2,8,10,6};
    int i;

    /* ポインタの宣言 */
    int *pt2;

    printf("------int型の配列------\n配列の中身：");
    for(i=0;i<5;i++)
        printf("%d ",intgata[i]);
    printf("\n");

    /* 配列の先頭アドレスを代入 */
    pt2 = intgata;
    printf( "配列の先頭アドレスは%p\n" , intgata );
    printf( "pt2の値は%p\n" , pt2 );

    pt2 = intgata + 1;     /* アドレスの使用 */ 
    printf( "配列の1番目は%d\n" , *pt2 );
    printf( "配列の1番目の場所は%p\n" , pt2 ); 
    
    return 0;
}
