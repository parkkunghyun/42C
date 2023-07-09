/*
fact(-2) = 0
fact(-1) = 0
fact(0) = 1
fact(1) = 1
fact(2) = 2
fact(3) = 6
fact(4) = 24
fact(5) = 120
fact(6) = 720
*/
// 음수일때는 그냥 0이고 
// 현재 값이 0부터 시작이고 -> 1이랑 현재 인덱스랑 곱하기!


#include <stdio.h>

int ft_iterative_factorial(int nb) {
    if(nb <0) {return 0;} 

   int index =1;
   int factorial = 1;
   while(index < nb+1) {
    factorial = factorial * index;
    index++;
   }
   return factorial;
}

int	main(void)
{
	int n;

	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
}