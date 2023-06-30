// 인자를 4개를 받는게 아닌 a,b를 포인터로 줘서
// 몫과 나머지를 a,b에 다시 저장!

#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int div,mod;
    div = *a/ *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}


int main(void) {
    int a;
    int b;
    a = 5;
    b = 2;

    ft_ultimate_div_mod(&a, &b);
    printf("div %d, left %d\n", a,b);

    return 0;
}