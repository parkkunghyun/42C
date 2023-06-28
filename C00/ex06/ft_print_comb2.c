// 00 01, 00 02, 00 03, ... 00 99, 01 02, 01 03, 01 04 ~ 98 99 까지

// 변수 두개를 지정하고 각 변수를 나눈 몫과 나머지를 적는 방식!
// 이때 변수를 나누고 그대로 두면 문자 아스키 코드값으로 취급이 안될수 있기 때문에
// 아스키코드값 48을 더해주면 됨!

// 예를 들어 숫자 2가 나머지라면 ft_putchar(48+2) 하면 아스키 코드값 50이고 이건 '2'이다!
// 마찬가지로 마지막을 제외한 나머지 부분에 , 와 띄어쓰기를 적어주자

// 여기서는 나머지와 나누기를 ft_write_comb에서 해주니까 인자로 int를 받고
// 숫자를 아스키로 바꾸니까 ft_print_com2함수에서는 그냥 int를 사용하자!

#include<unistd.h>
#include<stdbool.h>

void ft_putchar(char c) {
    write(1, &c,1);
}

void ft_write_comb(int first, int end, bool last) {
    ft_putchar(48 + first/10);
    ft_putchar(48 + first%10);

    ft_putchar(' ');

    ft_putchar(48 + end/10);
    ft_putchar(48 + end%10);

    if(!last) {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb2() {
    int first,end;
    bool last;

    first = 0;
    while(first <= 98){
        end = first +1;
        while(end <= 99) {
            last = (first == 98 && end ==99);
            ft_write_comb(first,end, last);
            end++;
        }
        first++;
    }
}

int main(void) {
    ft_print_comb2();
    return 0;
}