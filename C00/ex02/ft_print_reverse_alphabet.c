// 이건 z~a까지 뽑는 방식!
// 원래는 아스키 코드값을 증가시켜야 했지만 이건 감소시키면 됨!

#include<unistd.h>

void ft_putchar(char c) {
    write(1, &c,1);
}
void ft_print_reverse_alphabet() {
    char alphabet;
    alphabet = 'z';
    while(alphabet >= 'a') {
        ft_putchar(alphabet);
        alphabet--;
    }
}
int main() {
    ft_print_reverse_alphabet();
    return 0;
}