// 문자열 길이 세기 
//-> 그냥 포인터로 받아서 '\0'전까지 돌려서 개수를 출력해주면 된다!

// 여기서 보면 '\0'전까지니까 15가 아닌 14가 맞다!!

#include<stdio.h>

int ft_strlen(char *first_pointer) {
    int cnt = 0;
    while(*first_pointer != '\0') {
        cnt++;
        first_pointer++;
    }
    return cnt;

}

int	main(void)
{
	char string[15];
	char *first_pointer;
	int	 length;

	string[0] = 'H';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = ' ';
	string[6] = 'W';
	string[7] = 'o';
	string[8] = 'r';
	string[9] = 'l';
	string[10] = 'd';
	string[11] = ' ';
	string[12] = '4';
	string[13] = '2';
	string[14] = '\0';
	first_pointer = &string[0];
	length = ft_strlen(first_pointer);
	printf("length %d\n", length);
}