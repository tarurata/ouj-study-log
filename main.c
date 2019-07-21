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
void selection_sort (int v[], int n)
{
    // i=配列の要素数, j=全要素の中で、ソートに利用するループの回数、t=未ソート部分の先頭の要素
    int i, j, t, min_index;
    // まだソートされていない要素の中でループ
    for (i =0;i<n-1; i++){
        min_index = i;
        // 最小の要素を探索
        for(j=i+1; j<n; j++){
            if (v[j] < v[min_index]){
                min_index = j;
            }
            printf("i:%d j:%d  ", i, j);
            print_array(v, n);
        }
        // 最小となった要素を未ソート部分の先頭の要素と交換
        t=v[i];
        v[i] = v[min_index];
        v[min_index] = t;
    }
}

int main()
{
    int array[5]
    = { 30, 50, 20, 10,40};
    print_array(array, 5);
    selection_sort(array, 5);
    print_array(array, 5);
    return 0;
}
