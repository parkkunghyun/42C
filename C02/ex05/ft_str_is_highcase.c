// 이건 대문자를 검사 A-Z인지만 보면됨!


#include<stdio.h>
#include<stdbool.h>

int ft_str_is_uppercase(char* str) {
    int index=0;
    bool uppercase_correct = true;

    while(str[index] != '\0') {
        if(!(str[index] >='A' && str[index] <='Z' ) ) {
            uppercase_correct = false;
            break;
        }
        index++;
    }
    return uppercase_correct;
}

int	main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "HELLO";
	str_invalid = "HELLo";
	printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_uppercase(str_invalid));
}