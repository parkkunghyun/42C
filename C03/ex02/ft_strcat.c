// strcat -> str1에 str2를 추가해서 마지막 널문자 하고 문자열 반환!
// 함수원형 -> char * strcat(char *dest, char *origin);
// 그러면 일단 dest의 '\0'부분을 찾은 뒤 -> 그 부분부터 origin의 문자열을 넣어주자!
// 그리고 마지막으로 '\0'넣고 반환!


// c : Hello World$
// 
#include<stdio.h>
#include<string.h>

char* ft_strcat(char *dest, char *src) {
    // 일단 dest2의 '\0'찾기!
    int destNullIndex = 0;
    while(dest[destNullIndex] != '\0') {
        destNullIndex++;
    }

    int srcIndex = 0;
    while(src[srcIndex] != '\0') {
        dest[destNullIndex] = src[srcIndex];
        srcIndex++;
        destNullIndex++;
    }
    
    dest[destNullIndex] = '\0';
    return dest;
}

int main(void) {
    char *str_base;
    char dest[100];
    char dest2[100];
    char *src;
    int index;

    str_base = "Hello";
    src = " fewewfefewf  World";
    index = 0;
    while(index < 6) {
        dest[index] = str_base[index];
        dest2[index] = str_base[index];
        index++;
    }
    printf("c : %s$\n", strcat(dest, src));
    printf("ft : %s$\n", ft_strcat(dest2, src));
    return 0; 
}