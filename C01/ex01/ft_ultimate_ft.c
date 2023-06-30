// 다중포인터의 개념을 알아야함!
// 포인터 - 주소를 저장하는 변수!
// 이중포인터 - 포인터 변수의 주소를 저장하는 변수!

/**
 * int num=10; int*p = &num; int **pp = &p;
 * int ***ppp = &pp;
*/

// 2차원배열과 2중포인터는 유사하다! 


#include<stdio.h>

void ft_ultimate_ft(int *********nbr) {
    *********nbr = 42;
}

int main() {
    int a;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;
    int *********ptr9;

    a = 1;
    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;

    printf("before: %d\n", a);
    ft_ultimate_ft(ptr9);
    printf("after: %d\n", a);

    return 0;
}