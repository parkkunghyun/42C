// 문자열을 출력하는 함수 -> 마지막에는 NULL이 존재!

#include<unistd.h>

void ft_putchar(char c) {
    write(1, &c,1);
}

void ft_putstr(char *str) {
    while(*str != '\0') {
        ft_putchar(*str);
        str++;
    }
    
}

int		main(void)
{
	char *str;

	str = "Hello World";
	ft_putstr(str);
}