#include <stdio.h>

/* 関数プロトタイプ */
void func( char* , int );

int main()
{
    /* 文字配列の定義 */
    char ex[] = "Example";

    /* 関数の呼出 */
    func( ex , 2 );
    func( ex , 5 );
    
    return 0;
}

/* 〇文字目の文字をポインタを使用して出力する関数 */
void func( char *ad , int count )
{
    int ct = count - 1;     /* 添字は[0]から始まるので文字数から1引く */
    printf("%d文字目は%c\n", count , *(ad+ct) );
}
