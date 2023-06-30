// 문자열이 나오게 해주기!

#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *first_pointer) {
    while(*first_pointer != '\0') {
        ft_putchar(*first_pointer);
        first_pointer++; // 주소를 하나씩 옆으로 옮긴다!
    }
    //ft_putchar('\n');
}

int main(void) {
    char string[15];
    char *first_pointer;
    string[0] = 'H';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = ' ';
	string[6] = 'W';
	string[7] = 'o';
	string[8] = 'r';
	string[9] = 'l';
	string[10] = 'd';
	string[11] = ' ';
	string[12] = '4';
	string[13] = '2';
	string[14] = '\0';

    first_pointer = &string[0];
    //first_pointer = string;
    printf("%s\n", string);
    ft_putstr(first_pointer);
}