// swap 을 포인터로!

// 이게 숫자여서 바꾸기 애매해서 지금 write안 쓰느건가?

#include<stdio.h>

void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a;
    int b;
    a=1;
    b = 2;
    printf("before: %d %d\n", a,b);
    ft_swap(&a,&b);
    printf("after: %d %d\n", a,b);

    return 0;
}
