#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ポインタのポインタ
    int **array;
    int i, j, rows, columns;

    rows = 10;
    columns = 20;

    // rows分のサイズのメモリをヒープ領域に確保し、arrayとして配列を作成
    array = malloc (rows * sizeof(int *));

    // array[0]から2次元配列分のメモリを確保?
    array[0] = malloc(rows * columns * sizeof (int));

    // 配列の2次元目を作成
    for (i = 0; i<rows; i++ ){
        array[i] = array[0] + i * columns;
    }

    // 配列のすべての要素にrandomな1桁の整数を入力していく
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            array[i][j]= rand() % 10;
        }
    }

    // すべて表示
    for (i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // メモリ解放
    free(array[0]);
    free(array);

    return 0;
}

