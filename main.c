#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 3000000
// グローバル変数はメモリ上データセグメントに保存される
int array[ARRAY_SIZE];

int main()
{
    // ローカル変数はメモリ上スタックセグメント（スタックメモリ）に保存される
    int i;
    for (i=0; i<ARRAY_SIZE; i++){
        array[i] = 100;
    }
    for (i=0; i<10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}

