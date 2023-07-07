// 현재숫자가 소수면 그거 출력, 아니면 다음 수중 소수를 출력!
// 일단 현재 값부터 계속 돌리는데 만약 소수다! -> 그러면 멈추기!!

// sqrt의 경우 index*index를 검사하기때문에 int보다 클수 있음!
// 그래서 unsigned int로 지정해서 검사하기!!

#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
    unsigned int index,sqrt;
    if(nb <0) {return 0;}
    if(nb <= 1) {return nb; }

    index = 2;
    while( (sqrt = index*index) <= (unsigned int)nb) {
        index++;
    }

    index -=1;
    return index;
	
}

int	ft_is_prime(int nb)
{
    int sqrt,index;
    if(nb <= 1) {return 0;}
    if (nb <=3) {return 1;}

    if(nb %2 ==0 || nb %3 ==0) { return 0;}

    index = 2;
    sqrt = ft_sqrt(nb);
    while( index <= sqrt && nb % index != 0  ) {
        index++;
    }
    return (index > sqrt);
}

int	ft_find_next_prime(int nb)
{
    while(true) {
        if(ft_is_prime(nb)) {
            return nb;
        }
        nb++;
    }
}

int	main(void)
{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));
}