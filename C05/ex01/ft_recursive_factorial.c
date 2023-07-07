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
// 답은 ex00이랑 같은데 재귀로 뽑기!

#include <stdio.h>

int	ft_recursive_factorial_recursive(int factorial, int number)
{
    // number를 -시키면서 확인하기?
    // 1 6 => 6
    // 6 5 => 30
    // 30, 4 => 120
    // 120 ,3 => 360
    // 360,2 -> 720
    // 720, 1-> 720
    factorial *= number--; // 
    if(number >0) {
        // 6, 5
        // 30, 4
        // 120 3
        // 360, 2
        // 720, 1
        //   이걸 하고 종료 시켜야 아래로 안가니까!
        return ft_recursive_factorial_recursive(factorial, number);
    }
    return factorial;
    
}

int	ft_recursive_factorial(int nb)
{
    if(nb<0) {return 0;}
    if(nb == 0) {return 1;}
    return ft_recursive_factorial_recursive(1, nb);
	
}

int	main(void)
{
	int n;

	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_recursive_factorial(n));
		n++;
	}
}