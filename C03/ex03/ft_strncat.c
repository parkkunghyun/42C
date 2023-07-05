// strncat -> strcat는 src문자열을 전부 dest문자열 뒤에 적는거였다면
// strncat는 우리가 원하는 n개 만큼만 dest뒤에 붙인다!
// 여기서도 마지막은 '\0'을 넣어주기!!

#include<stdio.h>
#include<string.h>

char* ft_strncat(char* dest, char* src, int n) {
    int destNullIndex = 0;
    while(dest[destNullIndex] != '\0') {
        destNullIndex++;
    }
    int srcIndex=0;

    while(src[srcIndex] != '\0' && n > 0) {
        dest[destNullIndex] = src[srcIndex];
        n--;
        destNullIndex++;
        srcIndex++;
    }

    dest[destNullIndex] = '\0';
    return dest;

}

int main(){
    char *str_base;
    char dest[100];
    char dest2[100];
    char* src;
    int index;

    str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strncat(dest, src, 4));
    printf("ft : %s$\n", ft_strncat(dest2, src, 4));

    return 0;
}