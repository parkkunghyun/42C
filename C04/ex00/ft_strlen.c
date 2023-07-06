// strlen은 문자열 길이를 재는 함수!
// 이게 일찍 나올줄 알았는데 생각보다 늦게 등장했네

#include<stdio.h>
#include<string.h>

int ft_strlen(char* str) {
    int count = 0;
    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main(){
    char *str;

    str = "Hello";
    printf("C : %lu\n", strlen(str));
    printf("ft : %d\n", ft_strlen(str));

    return 0;
}