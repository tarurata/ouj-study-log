#include <stdio.h>
#include <stdlib.h>

void print_array (int v[], int n)
{
    int i;
    printf("array: ");
    for (i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

// v=配列 n=配列の要素数
void insertion_sort (int v[], int n)
{
    int i, j, t;
    for (i=1; i<n; i++){
        // 最初、1つめの要素を選択
        j = i;
        while ((j>=1) && (v[j-1]>v[j])){
            // tは一時的に今評価されている要素の値を入れておくための変数(temporary)
            // ここでv[0]がv[1]より大きかったら、v[0]の値とv[1]の値を入れ替える
            t = v[j];
            v[j] = v[j-1];
            v[j-1] = t;
            j--;
            printf("i:%d j:%d  ", i, j);
            print_array(v, n);
        }}
}

int main()
{
    int array[5]
    = { 30, 20, 50, 10,40};
    print_array(array, 5);
    insertion_sort(array, 5);
    print_array(array, 5);
    return 0;
}
