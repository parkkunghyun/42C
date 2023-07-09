// 아스키로 정렬하기!
// 일단 들어온 인자들을 저장할 배열 만들기!

// 문자열끼리 어떻게 비교시킬것인지!
// strcmp를 사용? -> compare는 두개가 같은지만 비교함

// 아래 개념 생각하기!
// 이 숫자가 양수면 앞에 str1이 더 뒤에 있는 애!!
// 0이면 같은거
// 음수면 str2가 아스키 코드상 뒤에 있다!

// 삽입정렬사용

#include<stdbool.h>
#include<unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putstr(char *str) {
    while(*str != '\0') {
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
}

int ft_strcmp(char* str1, char *str2) {
    while(*str1 != '\0' && *str2 != '\0' && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*(unsigned char*)str1) - (*(unsigned char*)str2);
    
}

void ft_sort(char **params, int n) {
    int i,j;
    i =0;
    while(i<n-1) {
        j = i+1;
        while(j <n) {
            if(ft_strcmp(params[i], params[j]) > 0 ) {
                // 즉 앞에가 뒤에보다 아스키 코드값이 크다면! 뒤로 보내주기!
                char* temp = params[i];
                params[i] = params[j];
                params[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv) {
    int i;
    if(argc >1) {
        i =1;
        char **params;
        
        while(argv[i]) {
            params[i-1] = argv[i];
            i++;
        }

        i = 0;
        ft_sort(params, argc-1);
        
        while(i < argc-1) {
            ft_putstr(params[i]);
            i++;
        }
       
    }
    return 0;
}