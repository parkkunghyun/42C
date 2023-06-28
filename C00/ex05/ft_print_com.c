// 여기부터가 진짜임!!
// ft_print_comb는 내가 생각하기에는 변수 몇개 써서
// 012 013 014 015 016 017 018 019 023
// ~ 789 이걸 표현하라는거 같음!

// 각각의 자리에 맞는 변수를 하나씩 설정한 뒤
// while문으로 돌려서 출력해주기! -> 3중 for문 사용한 느낌!

// 여기서 bool을 사용해서 마지막일때는 ,랑 띄어쓰기 안하게!

#include<unistd.h>
#include<stdbool.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_write_comb(char a, char b, char c, bool last) {
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (!last) {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb() {
    int hundred, ten, one; // 100, 10 ,1의 자리 변수이름!
    // one은 ten+1 - 9까지 돌기!
    // ten은 hundred+1 - 8
    // hundred는 0 - 7
    bool last;

    hundred = '0';
    while(hundred <= '7') {
        ten = hundred +1;
        while(ten <= '8') {
            one = ten + 1;
            while(one <= '9') {
                last = (one == '9' && ten =='8' && hundred =='7');
                ft_write_comb(hundred,ten,one, last);
                one++;
            }
            ten++;
        }
        hundred++;
    }
}

int main() {
    ft_print_comb();
    return 0;
}