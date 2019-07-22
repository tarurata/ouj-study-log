#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 3000000
// グローバル変数はメモリ上データセグメントに保存される
int array[ARRAY_SIZE];

int main()
{
    // ポインタ変数の宣言
    int *array;
    int i;

    // malloc関数により、ARRAY_SIZE分のメモリをヒープ領域に確保
    array = malloc(sizeof (int) * ARRAY_SIZE);

    // エラー処理
    if (NULL == array) {
        fprintf(stderr, "ERROR: malloc() \n");
        exit (-1);
    }
    else {
        // 確保した配列の全ての要素に100を入力していく
        for (i=0; i<ARRAY_SIZE; i++) {
            array[i] = 100;
        }
        // 0-10までの配列の要素を出力
        for (i=0; i<10; i++) {
            printf("%d ", array[i]);
        }
        // free関数によりメモリ解放
        free(array);
    }

    return 0;
}

