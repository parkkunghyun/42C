//  포인터를 드디어 사용함!
// 포인터로 내용을 저장하고 주고 받는 방법

// 지금 lldb로 확인하는데 write가 안되네

#include<stdio.h>
#include<unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main() {
    int a = 5;
    printf("%d\n",a);
    //ft_putchar(a);
    ft_ft(&a);
    printf("%d\n",a);
    //ft_putchar(a);
    return 0;
}