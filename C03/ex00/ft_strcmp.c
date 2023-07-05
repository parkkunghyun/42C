// strcmp -> 문자열 2개를 비교하는 함수!
// 다 비교 후에 return때 서로 빼준다
// 이때 문자열이 전부  같으면 0이나오고 아니면 다른 숫자가 출력됨!
// 서로 뺄때는 unsigned char로 해놓고 빼기!

// 두개 뺏을때 값이 이게 나옴!
// c: -111
// ft: -111
#include<stdio.h>
#include<string.h>

int ft_strcmp(char *str1, char *str2) {
    // 
    while(*str1 != '\0' && *str2 != '\0' && (*str1 == *str2) )
    {
        str1++;
        str2++;
    }
    return (*(unsigned char*)str1 - *(unsigned char*)str2 ) ;
}

int main() {
    char *str1;
    char *str2;

    str1 = "Hello";
    str2 = "Helloo";

    printf("c: %d\n",strcmp(str1, str2));
    printf("ft: %d\n", ft_strcmp(str1, str2));

    return 0;
}
