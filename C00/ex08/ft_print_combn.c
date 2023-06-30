// 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89

// print_combn이라는 이름답게 몇개의 변수를 사용해서 각 자릿수를 표현하는 방식인거 같다!
// 2자리 일때 10의 자리는 0 - 8까지, 일의 자리는 1 - 9까지 만 표현
// write로 한개의 문자씩 밖에 출력을 못해서 이렇게 출력하는 듯?

// void ft_print_combn(int n) 
// 이 함수는 최대 10개가 들어갈 배열을 만들어서 n만큼 0 넣어주기!
// 그러고 ft_print_combn_recursive로 보냄! 

// void	ft_print_combn_recursive(int n, int curr, int holders[], int st_index)
// 인자가 n-> 최대자리,  curr-> 현재 자릿수. 커질수록 max에 영향을 미친다!,
//  holders는 방금 만든 배열!, st_index가 인덱스위치
// 
// max -> 숫자를 몇개까지 놔둘수 있는지 정하는듯! -> curr이 커질때마다 커짐! 10-(n-curr)
// index <= max => 0<=8 | 1 <=9 
// curr ==n이면 ft_write_combo로 보내짐-> 드디어 출력!

// void	ft_write_combo(int n, int holders[])
// n, holders배열만 받는다!
// 

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_write_combo(int n, int holders[]) {
    // 
    int index;
    index = 0;
    while(index <n) {
        ft_putchar(48 + holders[index]);
        index++;
    }
    index = n-1;
    bool last = true; // 마지막 확인용!

    while(index >=0) {
        if(holders[index] != 9 - (n-1-index)) {
            last = false;
            break;
        }
        index--;
    }

    if(!last) {
        ft_putchar(',');
        ft_putchar(' ');
    }
}


void ft_print_combn_recursive(int n, int curr, int holders[], int st_index) {
    // 재귀를 이용해서 n == curr일때마다 ft_write_combo로 가게 해주면 됨!
    int index,max;

    if(n == curr) {
        ft_write_combo(n, holders);
    }
    else {
        index = st_index+1; // 시작인덱스+1를 값으로 넣는다!
        max = 10 - (n-curr); // max = 10 - (n-curr)로 해서 두자리일때 89가 최대이게 만듬!
        // 
        while(index <= max) {
            holders[curr] = index;
            ft_print_combn_recursive(n,curr+1, holders, index);
            index++;
        }
    }
}


void ft_print_combn(int n){
    // 만약 main을 모르는 상태에서 한다고 한다면
    // 10개 이하 자릿수를 설정하기 위해 10자리 배열로 설정했다 생각하기!
    // 그리고 각 자리를 일단 0으로 초기화!!
    int holders[10];
    int index;
    index = 0;
    while(index <n) {
        holders[index] = 0;
        index++;
    }
    ft_print_combn_recursive(n,0,holders,-1);
}

int	main(void)
{
	ft_print_combn(2);
}