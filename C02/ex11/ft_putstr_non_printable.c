// Coucou\0atu vas bien ?
// 출력 불가능한 문자를16진수 형태로 출력해야한다!

// \n이 왜 \0a인지 파악하자! -> n 

// 지금까지는 str[index] 이렇게 직접 적었는데 만약에 char변수로 받아서 적을거면
// unsigned char c = str[index]; 이렇게 받아서 적자!
// 혹시 음수 나오는거 방지! 

// 1. //로 putchar에 넣어줘야 \를 출력할수가 있다!
// 2. "012345~"[current/16] 하면 current/16한 결과가 저기서 찾아서 적힌다!
// 3. "012345~"[current%16] 도 마찬가지!
// 4. print 가능한 범위는 a >= '' && a != 127 이다!

/*
Coucou\0atu vas bien ?
\01\02oucou\0a\fe\ff
*/

#include<unistd.h>
#include<stdbool.h>

void ft_putchar(char c){
    write(1,&c,1);
}

bool isPrint(char c){
    return (c>= ' ' && c!= 127);
}

void ft_putstr_non_printable(char* string) {
    unsigned char c; // 문자를 하나씩 받을 예정 -> 이때는 항상 unsigned로!
    int index;
    index = 0;

    while(string[index] != '\0') {
        c = string[index];
        if(isPrint(c)) {
            ft_putchar(c);
        }else {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[c/16]);
            ft_putchar("0123456789abcdef"[c%16]);
        }
        index++;
    }
}

int	main(void)
{
	char *string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);

    ft_putchar('\n');

    char text2[] = "\x01\x02oucou\n\xfe\xff";
	ft_putstr_non_printable(text2);
}
