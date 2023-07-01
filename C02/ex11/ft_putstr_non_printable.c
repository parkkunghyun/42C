// Coucou\0atu vas bien ?
// 출력 불가능한 문자를16진수 형태로 출력해야한다!

// \n이 왜 \0인지 파악하자! -> n 

// 지금까지는 str[index] 이렇게 직접 적었는데 만약에 char변수로 받아서 적을거면
// unsigned char c = str[index]; 이렇게 받아서 적자!
// 혹시 음수 나오는거 방지! 

#include <stdbool.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

bool is_char_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void ft_putstr_non_printable(char *str)
{
	int	index;
	unsigned char current;

	index = 0;
	while (true)
	{
		current = str[index];
		if (current == '\0')
			break ;
		if (is_char_printable(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
		}
		index++;
	}
}

int	main(void)
{
	char *string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}