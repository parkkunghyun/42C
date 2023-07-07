/*
10^2 = 100
10^0 = 1
10^-1 = 0
10^5 = 100000
*/

#include <stdio.h>

int	ft_recursive_power_recursive(int number, int power, int result)
{
    result *= number;
    power--;
    if(power >0) {
        return ft_recursive_power_recursive(number, power, result);
    }

    return result;
	
}

int	ft_recursive_power(int nb, int power)
{
	if(power < 0) {return 0;}
    if(power ==0) {return 1;} 

    int result = 1;
    return ft_recursive_power_recursive(nb, power, result);
}

int	main(void)
{
	printf("10^2 = %d\n", ft_recursive_power(10, 2));
	printf("10^0 = %d\n", ft_recursive_power(10, 0));
	printf("10^-1 = %d\n", ft_recursive_power(10, -1));
	printf("10^5 = %d\n", ft_recursive_power(10, 5));
}