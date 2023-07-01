// 단어의 첫문자를 대문자로 변환!
// 이거 답 쓴 사람  답 은 맞는데  main에 적힌 예제가 이상한거였다!!!!

// 그래도 내 답으로 고쳐봄!!
// 현재 index==0 이거나 현재가 스페이스면 그 다음 부분이 단어의 첫글자라는 의미!
// 그렇게 되면 a-z안에 있다면 이걸 대문자로 변환해주자!

// 일단 함수 하나에 다 하고 나누자!
// https://jdev.tistory.com/23 -> 여기에 포인터 아스키를 사용한 방식 부분을 참조했다!

#include <stdbool.h>
#include <stdio.h>

char *ft_strcapitalize(char* str) {
    int index =0;
   // bool valid = true;

    while(str[index] != '\0') {
        if(index ==0) {
            if('a' <= str[index] && str[index] <='z') {
                str[index] = str[index] -'a' + 'A';
            }
        }else{
           // str[index]가 공백이라면 그 다음부분이 단어의 첫글자!
           if(str[index] == 32 && (str[index+1] >='a'  && str[index] <='z')) {
                str[index+1] = str[index+1] -'a' +'A';
           }
        }

        index++;
    }
    
    return str;
}

int	main(void)
{
	char	*str_base;
	char	str_cap[36];
	int		index;

	//str_base = "salut, c0mment tu vas ? 42mots quarante-deux; cinquante+et+un";
	// str_base = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";

    str_base = "salut, c0ment 0t, vas ?";
	index = 0;
	while (index < 23)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	ft_strcapitalize(&str_cap[0]);
	//printf("base        : %s\n", str_base);
	//printf("capitalized : %s\n", str_lower);
	printf("%s\n", str_cap);
}