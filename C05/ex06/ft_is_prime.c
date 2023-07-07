// 입력받은 숫자가 소수이면1, 아니면 0을 출력!
// ft_sqrt, ft_is_prime, is_prime 이렇게 함수를 사용!
// ft_is_prime -> 1이하는 0, 2,3은 1 임 그리고 index를 2부터 시작,
// sqrt에 넣은 숫자보다 작은동안 0으로 안나눠지면 됨!
// 0이 리턴이면 index <= sqrt임

// is_prime -> 위에 함수 간단히 적은거!, 내가 구현 안함!


#include <stdio.h>
#include <limits.h>
#include <math.h>

// 여기서 사용하는 sqrt는 정확하게 반 나누지 못한다고 0을 주는게 아니라!
// 절반 정도만 가면 됨!
int	ft_sqrt(int nb)
{
    unsigned int index;
    if(nb < 0) {return 0;}
    if(nb <= 1) {return nb;}

    unsigned int sqrt;
    index = 0;

    while( (sqrt = index *index) <= (unsigned int)nb) {
        index++;
    }
    index -=1;

    return index;
}

int	ft_is_prime(int nb)
{
    int index;
    int sqrt;

    if(nb <= 1) {return 0; }
    if(nb <= 3) {return 1;}

    if(nb %2 ==0 || nb %3 ==0) { return 0; }

    index = 2;
    sqrt = ft_sqrt(nb);
    while( (index <= sqrt) || nb % index != 0) {
        index++;
    }

    return (index > sqrt);
}

int	is_prime(int prime)
{   
    int i;
    int sq;

    if(prime <= 1) {return 0;}
    sq = (int)sqrt(prime);
    for (i = 2; (i <= sq) && (prime % i != 0); i++);
	return (i > sq);
}

int	main(void)
{
	int	number;
	int	results[2];
	int	count;

	number = 0;
	count = 0;
	while (number < 50000)
	{
		results[0] = is_prime(number);
		results[1] = ft_is_prime(number);
		printf("is_prime(%d) = %d  --  %d\n", number, results[1], results[0]);
		if (results[0] != results[1])
			return (1);
		number++;
		if (results[0])
			count++;
	}
	printf("is_prime(%d) = %d\n", INT_MAX, is_prime(INT_MAX));
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}