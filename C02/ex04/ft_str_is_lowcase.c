// 문자열이 소문자인지!
// 이건 a-z인지만 확인하면 됨! -> 제일 간단!


#include<stdio.h>
#include<stdbool.h>

int ft_str_is_lowercase(char* str) {
    int index;
    index=0;
    bool lowercase_correct= true;

    while(str[index] != '\0') {
        if( !(str[index] >='a' && str[index] <='z') ) {
            lowercase_correct = false;
            break;
        }
        index++;
    }
    return lowercase_correct;
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "hello";
	str_invalid = "hellO";
	printf("should be 1: %d\n", ft_str_is_lowercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_lowercase(str_invalid));
}