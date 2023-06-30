// before: [ 8, 7, 6, 5, 4, 3, 2, 1, 0 ]
// after : [ 0, 1, 2, 3, 4, 5, 6, 7, 8 ]

// 이게 터미널에서 gcc로 컴파일해서 실행하니까 죽었음 -> 여기 답에서는 !! index범위가 넘어섰다!!
// 그래서 index <size-1로 설정하면됨!

// swap함수를 사용해야한다!
// 이건 정렬이이서 그냥 단순히 양 값을 바꾸는게 아니라
// 비교하고 바꿔야한다!!

// 원래 정렬할때는 이중 for문으로 작성했지만 여기서는 이중 while로 작성하기!
// swaped라는 boolean변수를 둬서 이게 더는 참이 아니면 while중단하기!

#include<stdbool.h>
#include<stdio.h>

void ft_swap(int *first, int *last) {
    int temp = *first;
    *first = *last;
    *last = temp;
}

void ft_sort_int_tab(int *first_pointer, int size){
    int index = 0;
    bool swapped;

     // 8 7 6 5 4 3 2 1
     // 7 8 6 5 4 3 2 1
     // ... 7 6 5 4 3 2 1 8 -> 즉 한번 내부 while 전체 돌면 큰 숫자가 맨 뒤로 감!

    // 
    while(true) {
        swapped = false;
        index = 0;
        
        while(index < size-1) {
            if(first_pointer[index] > first_pointer[index+1]) {
                ft_swap(&first_pointer[index], &first_pointer[index+1]);
                swapped = true;
            }
            index++;
        }
        
        if(!swapped) {
            break;
        }
    }
}

void debug_dump_array(int numbers[], int size) {
    int i;
    i=0;
    printf("[ ");
    while(i<size) {
        if(i == size-1) {
            printf("%d ", numbers[i]);
        }else {
            printf("%d, ",numbers[i]);
        }
        i++;
    }
    printf("]");
}


int	main(void)
{
	int numbers[9];
	int *first_pointer;
	int index;

	index = 0;
	while (index < 9)
	{
		numbers[index] = 9 - (index + 1);
		index++;
	}
	first_pointer = &numbers[0];
	printf("before: ");
	debug_dump_array(numbers, 9);
	ft_sort_int_tab(first_pointer, 9);
	printf("\nafter : ");
	debug_dump_array(numbers, 9);
}