#include <stdbool.h>
#include <stdio.h>

void ft_swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ft_sort_int_tab(int numbers[], int size) {
	int index =0;
	bool last  = true;
	
	while(index < size-1) {
		int temp = index +1;
		while(temp < size) {
			if(numbers[index] > numbers[temp] ){
				last = false;
				ft_swap(&numbers[index], &numbers[temp]);
			}
			temp++;
		}
		if(last) {
			break; // 마지막 즉 다 정렬됨!
		}
		index++;
	}
} 

void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
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