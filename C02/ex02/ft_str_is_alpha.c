// 이 문자열이 전부 알파벳이 맞는지 확인!
// 이건 아스키코드를 잘 사용해야겄다!!

//should be 1: 1
// should be 0: 0

// 여기서 a-z 이거나 A-Z이면 true 이니까 이안에 들어가는걸 조건으로 하고 앞에 !()로 해버리면 
// a-z A-Z 가 아닌 애들은 전부 걸러진다!

#include <stdbool.h>
#include <stdio.h>


int ft_str_is_alpha(char *str) {
    int index;
    index = 0; 
    bool alphabet_correct=true;

    while(str[index] != '\0') {
       if( !( (str[index] >= 'a' && str[index] <= 'z' )  || (str[index] >= 'A' && str[index] <= 'Z' ) ) ) {
            alphabet_correct = false;
            break;
       }
       index++;
    }

    return alphabet_correct;
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "Hello";
	str_invalid = "Hell0";
	printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
	printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));
}