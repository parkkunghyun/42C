#include<unistd.h>

void ft_putchar(char c) {
    //char c = "A";
    write(1, &c, 1); //
    // 11011 로 가서 A를 찾아오기!
}

int main(void) {
    // '' 문자고 "" 문자열로 인식!
    ft_putchar("A"); // 2바이트를 차지!
    return 0;
}
