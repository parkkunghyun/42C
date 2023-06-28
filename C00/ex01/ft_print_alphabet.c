// ft_print_alphabet.c
// 알바벳을 a~z까지 순차적으로 출력!
// 항상 출력은 한단어씩이고 이때는 ft_putchar함수를 적극 활용하자!

// 여기서는 항상 아스키 코드값으로 가기 때문에 97인 a에서 +1 하면 98 => 이건 b다!

#include<unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}
void ft_print_alphabet(void) {
    char alphabet;
    alphabet = 'a';
    while(alphabet <= 'z') {
        ft_putchar(alphabet);
        alphabet++;
    }
} 

int main(){
    ft_print_alphabet();
    return 0;
}