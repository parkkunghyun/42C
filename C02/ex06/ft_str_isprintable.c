// should be 1: 1
// should be 0: 0

// 출력할수 있는 문자열인지 아닌지를 파악해야 함
// 특수문자라면 두글자를 봐야하는데 \ 뒤에 n t b 말고 다른거 오거나 빈칸이면 false?

// 아스키코드 127 -> 7F이고 DELETE를 의미!
// 아스키코드중에 space ->32임 ,  

// 이 문제는 탭이나 엔터를 인정 안하고 한줄로 치고 공백은 스페이스만 인정하는 듯?


#include <stdbool.h>
#include <stdio.h>

int ft_str_is_printable(char* str) {
    int index=0;
    bool print_correct = true;

    while(str[index] != '\0') {
        if(str[index] == 127  || !(str[index] >= ' ') ) {
            print_correct = false;
            break;
        }
        index++;
    }
    return print_correct;
}

int	main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "Hell0";
	str_invalid = "hello\t";
	printf("should be 1: %d\n", ft_str_is_printable(str_valid));
	printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
}