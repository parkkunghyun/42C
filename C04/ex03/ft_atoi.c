// 문자열을 정수값으로 반환!
// atoi("-9895") -> 9895임!

// 처음에 아스키코드 9-13까지는 들어와도 무시! -> 이건 공백문자!
//"\t\n\v\f\r " 공백까지! 
// +,-가 두개 이상이면 0이반환!

// 저 위에 것들이 아니고 그냥 다른게 들어있으면 result == 0이어서 0이 나옴!
//  연산자 -나 +인가! 이거면 그냥 무시! -있으면 그때부터 -!!

#include <stdbool.h>
#include <stdio.h>

bool is_space(char c) {
    return c=='\t' || c=='\n' || c=='\v' || c =='\f' || c =='\r' || c==' ';

}

bool is_number(char c) {
    return '0' <= c && c <= '9';
}

bool is_operator(char c) {
    return '-' == c || '+' ==c;
}

int ft_atoi(char *str) {
    int result;
    int minus;

    minus = 1;
    result =0;

    while(is_space(*str)) {
        str++;
    }


    bool minusFirst= false;
    while(is_operator(*str)) {
        if(*str == '-'  && minusFirst == false) {
            minus *= -1;
            minusFirst = true;
        }
        str++;
    }


    while(is_number(*str)) {
        result *= 10;
        result +=*str - '0';
        str++;
    }

    return minus* result;

}


int main(){
    char *str;
    str = "---+---1234ab567";
    printf("%d\n", ft_atoi(str));

    return 0;
}