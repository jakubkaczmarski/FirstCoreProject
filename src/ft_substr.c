#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const* s, unsigned int start, size_t len)
{
    int end = start + len;
    int counter;
    counter = 0;
    char *arr = malloc(sizeof(char) * len);
    if(!arr)
    {
        return NULL;
    }
    while (start < end)
    {
        arr[counter] = s[start];
        start++;
        counter++;
    }
    return arr;
}
int main(void)
{
    char arr[] = "Siemanko";
    char *arr1 = ft_substr(arr, 3, 5);
    printf("%s", arr1);
}