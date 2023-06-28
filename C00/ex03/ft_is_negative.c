// ft_is_negative는 말 그대로 음수인지 확인하는 함수!
// 여기서 항상 문자열만 받을수있다고 생각했는데 정수도 받는게 가능했다!!

// 정수가 <0 이면 N, 아니면 P
// 보기 편하게 마지막에 \n 을 추가함!

#include<unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
    
}

void ft_is_negative(int n) {
    if(n<0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }
    ft_putchar('\n');
}

int main() {
    ft_is_negative(1);
    ft_is_negative(0);
    ft_is_negative(-1);

    return 0;
}