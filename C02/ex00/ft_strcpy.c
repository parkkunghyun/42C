// 문자열 src를 문자열 dst에 복사해서 리턴해주면 된다!
// 이때 포인터를 사용해서 각 문자에 접근해서 복사한다!

// 문자열의 마지막은 '\0'이니까 여기전까지 있는 문자나 공백이 들어가게 해주고
// index를 세준뒤 dest 마지막에 '\0'을 넣어줬다! 

#include<stdio.h>
#include<string.h>

char* ft_strcpy(char *dest, char *src) {
    int index;
    index = 0;
    while(src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
    
}

int main() {
    char *src;
    char dest[12];

    src = "Hello World";
    printf("base : %s\n", src);
    strcpy(dest, src);
    printf("cpy : %s\n", dest);
    ft_strcpy(dest, src);
    printf("ft_cpy : %s\n", dest);

    return 0;
}