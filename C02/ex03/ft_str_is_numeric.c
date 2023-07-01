// ex02랑 크게 안 다른 문제다 -> 이번에는 숫자를 검사! -
// 문자로 오니까 '0' - '9'라고 해서 한문자씩 검사하면 됨!

#include<stdio.h>
#include<stdbool.h>



int ft_str_is_numeric(char *str) {
    int index;
    index= 0;
    bool numeric_correct = true;

    while(str[index] != '\0') {
        if(  !('0' <= str[index] && str[index] <= '9' )  ) {
            numeric_correct= false;
            break;
        }
        index++;
    }

    return numeric_correct;
}

int main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "123456";
	str_invalid = "123A56";
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
}