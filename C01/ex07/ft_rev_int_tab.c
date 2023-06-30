// 배열에 값을 1- 9까지 넣은 뒤
// 이걸 포인터를 이용해서 각 반대로 출력되게 만들기!

//before: [ 1, 2, 3, 4, 5, 6, 7, 8, 9 ]
//after : [ 9, 8, 7, 6, 5, 4, 3, 2, 1 ]

#include<stdio.h>

void debug_dump_array(int numbers[], int size) {

    printf("[ ");
    int i =0;
    while (i < size)
    {
        if(i==size-1) {
            printf("%d ", numbers[i]);
        }else {
            printf("%d, ",numbers[i]);
        }
        
        i++;
    }
    printf("]");
}

void ft_rev_int_tab(int *first_pointer, int size) {
    int i =0; // 9/2 = 4
    
    // 1 2 3 4 5 6 7 8 9
    // i=0; size-i-1 = 8
    // 9 2 3 4 5 6 7 8 1
    // i=1; size-i-1 = 7
    // 9 8 3 4 5 6 7 2 1
    // i=2; size-i-1 = 6
    // 9 8 7 4 5 6 3 2 1
    // i=3; size-i-1 = 5

    while(i <size/2) {
        int temp = first_pointer[i];
        first_pointer[i] = first_pointer[size-i-1];
        first_pointer[size -i -1] = temp;
        i++;
    }

}

int main(void) {
    int numbers[9];
    int *first_pointer;
    int index;

    index = 0;
    while(index < 9) {
        numbers[index] = index +1;
        index++;
    }
    first_pointer = numbers;
    printf("before: ");
    debug_dump_array(numbers, 9);
    ft_rev_int_tab(first_pointer, 9);
    printf("\nafter : ");
    debug_dump_array(numbers, 9);

    return 0;
}