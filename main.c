#include <stdio.h>
#include <stdlib.h>

void print_array(int v[], int n)
{
    int i;
    printf("array: ");
    for (i=0; i<n; i++){
        for (i=0; i<n; i++){
            printf("%d ", v[i]);
        }
        printf("\n");
    }
}

int partition(int v[], int lower_bound, int upper_bound)
{
    int a, down, up, temp;
    a = v[lower_bound];
    up = upper_bound;
    down = lower_bound;

    while(down < up){
        while((v[down] <= a) && (down < upper_bound)){
            down++;
        }
        while(v[up] > a) {
            up--;
        }
        if (down < up) {
            temp = v[down];
            v[down] = v[up];
            v[up] = temp;
        }
    }
    v[lower_bound] = v[up];
    v[up] = a;
    return up;
}

void quicksort (int v[], int left, int right)
{
    int p;
    if (left >= right) {
        return ;
    }
    // 分割
    p = partition(v, left, right);
    // 再帰関数呼び出し
    quicksort(v, left, p-1);
    // 再帰関数呼び出し
    quicksort(v, p+1, right);
}

int main()
{
    int array[10]
    = { 80, 40, 30, 20, 10, 00, 70, 90, 50, 60};

    print_array(array, 10);
    quicksort(array, 0, 9);
    print_array(array, 10);

    return 0;
}
