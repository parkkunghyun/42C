#include<unistd.h>

void ft_putchar(char c) {
    write(1,&c,1);
}
void ft_putstr(char *str) {
    while(*str != '\0') {
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
}

int main(int argc, char *argv[]) {
    int i;

    if(argc >1 ) {
        i = argc-1;
        while(i >0) {
            ft_putstr(argv[i]);
            i--;
        }
    }

    return 0;
}