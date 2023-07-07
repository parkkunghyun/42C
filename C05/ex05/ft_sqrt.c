/*
sqrt(-2) = 0
sqrt(-1) = 0
sqrt(0) = 0
sqrt(1) = 1
sqrt(2) = 0
sqrt(3) = 0
sqrt(4) = 2
sqrt(5) = 0
sqrt(8) = 0
sqrt(9) = 3
sqrt(10) = 0
sqrt(11) = 0
sqrt(12) = 0
sqrt(15) = 0
sqrt(16) = 4
sqrt(17) = 0
sqrt(18) = 0
sqrt(24) = 0
sqrt(25) = 5
sqrt(1000000) = 1000
sqrt(2147483647) = 0
sqrt(-2147483648) = 0
sqrt(2147395600) = 46340
*/
// 간단하게 제곱근 아니면 0이고 제곱근이면 그 제곱근을 출력!
// 그리고 -는 0으로!
// sqrt = index*index로 확인하기! 작거나 같을때까지 검사 -> 그러면 index가 같아도 index+1까지 감
// 그래서 index에서 -1 해주고 삼항연산자로 nb랑 같으면 index : 0
// 이때 음의 정수도 있어서 unsigned int로 !!
//
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	if(nb <0) {return 0;}
    if(nb <= 1 ) { return nb; }

    unsigned int sqrt;
    unsigned int index;

    index =0;
    while((sqrt = index*index) <= (unsigned int)nb) {
        index++;
    }
    index -=1;
    return (index*index == (unsigned int)nb ? index : 0);   
}

int	main(void)
{
	int number;

	number = -2;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
}