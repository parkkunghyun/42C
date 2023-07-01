//  strlcpy 와 strncpy의 차이점

// strncpy는 src의 내용을 dest에 size n만큼 복사!
// 단점은 src가 n보다 크면 dest에 '\0'이 안들어간다!! -> 앞에서 내가 적은 걱정이랑 같네!
// 이러면 우연히 '\0'을 만나기 전까지 쓰레기 값이 줄줄 출력됨!

// strlcpy는 non-terminate를 보완한 함수
// dest의 마지막에 '\0'이 무조건 존재하기 때문에 size-1만큼의 문자를 복사
// hello -> hell과 '\0'을 저장한다!!

// int값을 반환하는데 이때 src의 length를 반환한다! 


#include<stdio.h>
#include<string.h>

// if 사이즈가 0이면 0-1만큼 채울수가 없기때문에 이거 조건 적어주기!

unsigned int ft_strlcpy(char* dest, char* src, unsigned int size) {
    int index=0;
    int count=0;

    while(src[count] !='\0') {
        count++;
    }

    if(size != 0) {
        while(src[index] != '\0' && index <size-1) {
            dest[index] = src[index];
            index++;
        }
        dest[index] = '\0';
    }
    
    return count;
}

int main(void) {
    char *string1;
    char string2[6];

    string1 = "hello";
	printf("base   : %s\n", string1);
	
    strlcpy(string2, string1, 6);
	printf("cpy c  : %s\n", string2);
	
    ft_strlcpy(string2, string1, 6);
	printf("cpy ft : %s\n", string2);


    return 0;
}