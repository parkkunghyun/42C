// strstr함수 -> 살면서 처음 들어봄!
// string1에서 str2의 첫번째 표시를 찾는다!
// str2가 시작되는 위치를 포인터로 전달!
// str2가 없으면 null
// str2가 길이가 0이면 string1을 그냥 리턴!

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
// 일단 시작 단어가 같은게 있으면 그때부터 문자열자체가 일치하는지 보고
// 일치하면 그 시작 포인터를 리턴!

char* ft_strstr(char* haystack, char* needle) {
    // 일단 *needle == '\0'이면 그냥 haystack리턴하자!
    if(*needle == '\0') {return haystack; }

    char* subHaystack;
    char* subNeedle;
    subHaystack = haystack;
    subNeedle = needle;

    int saveIndex= 0;

    // 이제부터 haystack에서 찾아보기!
    while(*haystack != '\0') {
        if(*haystack == *needle) {
            bool same = true;
            // 첫글자가 같은거!
            while(*needle != '\0') {
                if(*haystack != *needle) {
                    same = false;
                    needle = subNeedle;
                    break;
                }
                haystack++;
                needle++;
            }
            // haystack에서  needle의 시작 위치를 주는 식이 왜 이거인지 정확히 알고가자!
            // printf("%p, %c\n", haystack, *haystack);
            // printf("%p, %c\n", needle, *needle);
            // printf("%p, %c\n", subNeedle, *subNeedle);
            // 0x100003f8f,  ' ' -> 띄어쓰기여서 이렇게 일단 표현함!
            // 0x100003f97,  ' ' -> needle은 현재 '\0'이거이지 않음?
            // 0x100003f94, B
        

            // return &subHaystack[saveIndex]; -> 이게 내가 생각한 정답임!!!
            // 왜냐면 일단 haystack++이렇게  움직였어서 이제 haystack[index] 이렇게는 사용못함!
            // 그래서 subHaystack[saveIndex]라고 해서 정확히 시작 인덱스의 위치를 반환했다!!

            // return haystack; 그냥 이렇게 해버리면 needle이 다 지나간 haystack 포인터위치 부터 나옴!
            if(same) {
                
                printf("%d\n",saveIndex);
                //return (char*)(haystack - (needle - subNeedle));}
                return &subHaystack[saveIndex];
            }
        } 
        haystack++;
        saveIndex++;
    }
// 찾았는데도 없으면 NULL 리턴!
    return NULL;
}
 
int	main(void)
{
	char *haystack;
	char *needle;
	char *result_c;
	char *result_ft;

	haystack = "Foo Bar Baz";
	needle = "Bar";
	result_c = strstr(haystack, needle);
	result_ft = ft_strstr(haystack, needle);
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}