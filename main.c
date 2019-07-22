#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ポインタのポインタ
    int **array;
    int i, j, rows, columns;

    rows = 768;
    columns = 1024;

    // rows分のサイズのメモリをヒープ領域に確保し、arrayとして配列を作成
    array = malloc (rows * sizeof(int *));

    // rows分の数だけヒープメモリ上にcolumns分のメモリを確保し、配列の2次元目を作成
    for (i = 0; i<rows; i++ ){
        array[i] = malloc(columns * sizeof (int));
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

    // すべてメモリ解放j
    for (i=0; i<rows; i++){
        free(array[i]);
    }
    free(array);

    return 0;
}

