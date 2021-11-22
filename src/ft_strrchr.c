#include <stdio.h>
char* ft_strchr(const char* s, int c) {
    char* ret = 0;
    while (*s) {
        if (*s == '\0') {
            break;
        }
        if (c == *s) {
            ret = (char*)s;
        }

        s++;
    }
    return ret;
    ;
}
int main(void) {
    char arr[] = "Siaemankoa";
    char m = 'o';

    ft_strchr(&arr[0], m);
    printf("res %c", *ft_strchr(&arr[0], m));
}