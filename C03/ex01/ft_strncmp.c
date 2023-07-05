// strncmp -> n개의 개수까지 두개가 같은지!
// 이건 strcmp에서 n이라는 제한 숫자만 추가하면 된다!

#include<stdio.h>
#include<string.h>

int ft_strncmp(char *str1, char *str2, int n) {
    while(*str1 != '\0' && *str2 != '\0' && n>0 && *str1 == *str2) {
        str1++;
        str2++;
        n--;
    }
    if(n ==0) {
        return 0;
    }

    return *(unsigned char*)str1 - *(unsigned char*)str2;

}

int main(){
    char *str1;
    char *str2;

    str1 = "Hello";
    str2 = "Helloo";
    printf("c : %d\n", strncmp(str1, str2, 2));

    printf("ft : %d\n", ft_strncmp(str1, str2, 2));

    return 0;
}