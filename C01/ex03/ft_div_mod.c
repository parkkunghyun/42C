// 나누기 해서 몫과 나머지를 포인터로 구하기!

#include<stdio.h>

void ft_div_mod(int a,int b,int *div, int *mod){
    *div = a/b;
    *mod = a%b;
}

int main(void) {
    int a,b,div,mod;
    a=5;
    b= 2;

    ft_div_mod(a,b,&div, &mod);
    printf("%d / %d = %d, left %d\n",a,b,div,mod);
    return 0;
}