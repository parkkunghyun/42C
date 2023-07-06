#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

/*
-eolhlehhh -> 숫자 아닌게 들어가서 버퍼에서 그냥 아무렇게나 빼서 출력함!
-2147483648 -> 0-9안에서 제일 작은수?
2147483647 -> 0-9안에서 제일 큰수?
*/

// limits.h는 숫자나 값들의 한계를 알려줌 INT_MIN, INT_MAX 처럼!

// ft_putnbr_base(숫자, 문자열) -> 문자열이 유효한지 검사!
// 아니면 그냥 종료!
// 숫자로만 적혀있다면 길이를 일단 파악하기!
// 그리고 ft_putnbr_base_recursive로 줌!

// is_base_valid(char *str)
// 여기서는 일단 문자열길이가 1보다 작거나 같으면 or 문자열주소가 0이면 그냥 false반환 
// 심지어 중복숫자도 안봐줌!
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

bool is_base_valid(char *str)
{
	char	*curr;
	int		index;
	int		jndex;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*curr)
	{
		if (*curr == '\t' || *curr == '\n' || *curr == '\v' || *curr == '\f'
			|| *curr == '\r' || *curr == ' ' || *curr == '+' || *curr == '-')
			return (false);
		curr++;
	}
	index = 0;
	while (index < curr - str)
	{
		jndex = index + 1;
		while (jndex < curr - str)
			if (str[index] == str[jndex++])
				return (false);
		index++;
	}
	return (true);
}

void ft_putnbr_base_recursive(int number, char *base, int radix)
{
	if (number == -2147483648)
	{
		ft_putnbr_base_recursive(number / radix, base, radix);
		write(1, &(base[-(number % radix)]), 1);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-number, base, radix);
		return ;
	}
	if (number > radix - 1)
		ft_putnbr_base_recursive(number / radix, base, radix);
	write(1, &(base[number % radix]), 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (!is_base_valid(base))
		return ;
	radix = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, radix);
}

int	 main(void)
{
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MAX, "0123456789");
}