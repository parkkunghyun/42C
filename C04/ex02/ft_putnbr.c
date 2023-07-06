// ft_putnbr은 숫자를 출력!
// -붙은애는 -붙여서 출력!
// +붙은거는 그냥양수!
// 이거 여기 과제 전에 나오문제 아닌가?

#include<unistd.h>

void ft_putchar(char c){
    write(1, &c,1);
}

void ft_putnbr(int n) {
    if(n == -2147483648) {
        ft_putnbr(n/10);
        ft_putchar('8'); 
        // 48을 더해야하는데 그러면 오버플로우 뜸!!
    }
    else if(n <0) {
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else {
        if(n > 9) {
            ft_putnbr(n/10);
        }
        ft_putchar(48 + n%10); // 
    }
}


int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(20000706);
	ft_putchar('\n');
	ft_putnbr(+2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
    ft_putchar('\n');
}