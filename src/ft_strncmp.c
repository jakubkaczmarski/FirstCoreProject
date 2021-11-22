#include <stdio.h>
int strncmp(const char *s1, const char *s2, size_t n)
{
    int counter;
    counter = 0;
    while(*s1 && *s2 && counter < n)
    {
        if(*s1 != *s2)
        {
            return *s1 - *s2;
        }
        counter++;
        s1++;
        s2++;
    }
    return 0;
}
int main(void)
{
    char a[] = "Scemanko";
    char b[] = "Saemanko";
    printf("%i", strncmp(a , b, 2));
}