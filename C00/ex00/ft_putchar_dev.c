// A같은 단어 한단어를 줬을때 출력이 되게해주는 ft_putchar 함수 구현하기!

// write(파일출력방식, 변수 주소, 몇개나 출력);
// A를 전달했고 여기서는 A가 들어간 주소를 write에 넣어서 찾아간 뒤 출력하게 했다!

#include<unistd.h>

void ft_putchar(char c) {
    // 간단하게 write(터미널출력, 값 저장된 주소! ,몇개나 출력할지);
    write(1, &c, 1);
}
int main(void) {
    ft_putchar('A');
    return 0;
}