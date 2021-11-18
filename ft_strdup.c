#include <stdio.h>
#include <stdlib.h>
char* ft_strdup(const char* s) {
    int counter;
    counter = 0;
    while (s[counter] != '\0') {
        counter++;
    }
    char *arr = malloc(counter * sizeof(char));
    counter = 0;
    while(s[counter] != '\0')
    {
        arr[counter] = s[counter];
        counter++;
    }
    return arr;
}

int main(void)
{
    int num = 0;
    char arr[] = "Siemanko";
    char *ptr = ft_strdup(arr);
    printf("Str %s", ptr);
}