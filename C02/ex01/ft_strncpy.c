// strncpy는 내가 원하는 부분만큼만 복사를 할수있게 해준다
// 이때 두가지 경우를 생각해주면 됨!

// 1. 내가 복사할 문자열보다 n이 클경우 -> 이때는 단어 다 넣고 나머지를 '\0'으로 채우자!
// 2. 내가 복사할 문자열보다 n이 작거나 같은경우 -> 그냥 다 넣어주면 됨!

#include<stdio.h>
#include<string.h>

char* ft_strncpy(char *dest,char *src, unsigned int n) {
    unsigned int index;
    index=0;

    // index가 n보다 작고 src 마지막이 아닐때까지만 돌기!!
    // 
    while(index<n && src[index] != '\0' ) {
        dest[index] = src[index];
        index++;
    }

    // 만약에 src는 마지막인데 index가 n까지 못갔을경우 -> 돌아주기!
    while(index <n) {
        dest[index] = '\0';
        index++;
    }
    return dest;
    // 이러면 마지막에 따로 '\0'를 안써도 되는거 같긴한데 
    // 만약 src가 n보다 크다면 이때는 dest에 '\0'이게 안들어가네!!
}

int main() {
    char *src;
    char dest[20];
    src = "Hello World";
    printf("base    : %s\n",src);
    strncpy(dest, src,8);
    printf("cpy     : %s\n",dest);
    ft_strncpy(dest,src,8);
    printf("ft_cpy  :%s\n", dest);
    printf("dest last%c", dest[8]);

    return 0;
}