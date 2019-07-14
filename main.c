#include <stdio.h>
#include <stdlib.h>

#define MAX 128

// 各リターンコードを設定
#define PUSH_SUCCESS 1
#define PUSH_FAILURE -1
#define POP_SUCCESS 2
#define POP_FAILURE -2

// ポインタ変数topのアドレス先の値(実体)を初期化
void stack_init (int *top)
{
    *top = 0;
}

void display (int stack[], int top)
{
    int i;
    printf("STACK(%d): ", top);
    for (i = 0; i < top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int push (int stack[], int *top, int data)
{
    if (*top >= MAX) {
        return PUSH_FAILURE;
    }
    else {
        stack[*top] = data;
        (*top)++;
        return PUSH_SUCCESS;
    }
}

int pop (int stack[], int *top, int *data)
{
    if ((*top) > 0) {
        *data = stack[(*top) - 1];
        (*top)--;
        return POP_SUCCESS;
    }
    else {
        return POP_FAILURE;
    }
}

int main ()
{
    int stack[MAX];
    int top, data;
    int i;

    stack_init(&top);
    for (i=0; i < 3; i++){
        data = ((i+1) * 100) + 200;
        printf("push: %d\n", data);
        push (stack, &top, data);
    }
    for (i=0; i < 3; i++){
        pop (stack, &top, &data);
        printf("pop: %d\n", data);
    }
}
