// 이번 과제는 전부 2개씩 짝이 있음?


#include<stdio.h>

char* ft_strlowcase(char* str) {
    int index =0;
    while(str[index] != '\0') {
        if(str[index] >='A' && str[index] <='Z') {
            str[index] = str[index] -'A' +'a'; // -65+97이어서 +32임
        }
        index++;
    }
    return str;
}

int	main(void)
{
	char	*str_base;
	char	str_lower[6];
	int		index;

	str_base = "HELl0";
	index = 0;
	while (index < 6)
	{
		str_lower[index] = str_base[index] + 0;
		index++;
	}
	ft_strlowcase(&str_lower[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be lower case: %s\n", str_lower);
}