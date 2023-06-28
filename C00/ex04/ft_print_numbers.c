// 03이랑 04랑 바뀜!!

// 영어 순서 출력과 마찬가지로 0-9까지 출력하면 됨!
// 여기서는 바로 write에서 적어야해서 문자로 '0' 이렇게 적었다

#include<unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_numbers() {
    int number;
    number = '0';
    while (number <= '9')
    {
        ft_putchar(number);
        number++;
    }
    
}
int main(void) {
    ft_print_numbers();
    return 0;
}