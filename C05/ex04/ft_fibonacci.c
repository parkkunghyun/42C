/*
fibonacci(-2) = -1
fibonacci(-1) = -1
fibonacci(0) = 0
fibonacci(1) = 1
fibonacci(2) = 1
fibonacci(3) = 2
fibonacci(4) = 3
fibonacci(5) = 5
fibonacci(6) = 8
fibonacci(7) = 13
fibonacci(8) = 21
*/

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if(index <0) { return -1; }
    
    if(index < 2) {return index; }

    return ft_fibonacci(index-2) + ft_fibonacci(index-1);
}

int	main(void)
{
	int	index;

	index = -2;
	while (index < 16)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}