/*
10^2 = 100
10^0 = 1
10^-1 = 0
10^5 = 100000
*/

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	// nb를 계속 곱해주면 되는거 아님?
    if(power <0) { return 0; }

    int result = 1;
    while(power >0) {
        result = result * nb;
        power--;
    }
    return result;
}

int	main(void)
{
	printf("10^2 = %d\n", ft_iterative_power(10, 2));
	printf("10^0 = %d\n", ft_iterative_power(10, 0));
	printf("10^-1 = %d\n", ft_iterative_power(10, -1));
	printf("10^5 = %d\n", ft_iterative_power(10, 5));
}