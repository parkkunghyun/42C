/* 
42
4242
20000706
2147483647
-2147483648

이런식으로 나와야함! 즉 -가 붙은 수는 -붙여서 나오기!
근데 + 붙은 수는 그냥 무시하게끔 -> 이건 char를 int로 바꾸면 무시 된다! 
여기서 핵심은 재귀를 사용하는것!

왜냐면 출력이 한글자씩이어서 /10을 해서 계속 재귀하고 %10씩 계속 출력해줘야해서!!

그리고 음수 맨 마지막을 넣으면 int계산이 제대로 안되나봄..
그래서 10을 나누고 따로 마지막에 8을 넣어주기!
*/
#include<unistd.h>


void ft_putchar(char c) {
    write(1,&c,1);
}

void ft_putnbr(int n) {
    // n이 0이면음수 나오게!
    
    if(n == -2147483648) {
        ft_putnbr(n/10);
        ft_putchar('8');
    }
    else if(n <0) {
        ft_putchar('-');
        ft_putnbr(-n); // 음수에 - 붙여서 숫자만 출력해주기!

    } else {
        // 양수의 경우 재귀롤 맨 처음 단어부터 마지막 일의 자리까지 출력해주기
        // 10보다 작을 경우! 굳이 /10을 안해도 된다!
        if(n >9) {
            ft_putnbr(n/10);
        }
        ft_putchar(48 + n%10);
        // 42
        //  /10 하니까 4만 감!
        // 4 는 /10을 안해도 되니까 바로 출력!
        // 그리고 함수 한개 빠져나온 뒤 42의 나머지를 출력하고 끝!
    }

}

int main(void) {
    ft_putnbr(555542);
	ft_putchar('\n');
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(20000706);
	ft_putchar('\n');
	ft_putnbr(+2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);

    return 0;
}