// 소문자 부분은 대문자로 바꿔주면 될듯?
// 숫자는 패스하고 
// 소문자만 찾아보자!

// bool 변수가 필요한거임?

#include<stdio.h>
#include<stdbool.h>

char* ft_strupcase(char* str) {
    int index=0;

    while(str[index] != '\0') {
        if(str[index] >='a' && str[index] <='z') {
            str[index] = str[index] -'a' +'A'; // -97+65랑 같은 의미여서 -32해도 됨!
        }
        index++;
    }

    return str;
}

int	main(void)
{
	char	*str_base;
	char	str_upper[6];
	int		index;

	str_base = "heLl0";
	index = 0;
	while (index < 6)
	{
		str_upper[index] = str_base[index] + 0;
		index++;
	}
	ft_strupcase(&str_upper[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be upper case: %s\n", str_upper);
}