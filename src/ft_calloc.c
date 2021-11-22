#include <stdio.h>
#include <stdlib.h>
void ft_bzero(void *s, size_t n){
    int counter = 0;
    if(n > 0)
    {
       while(counter == n)
       {
           *(char*)s = 0;
           counter++;
       }
    }
}
void* ft_calloc(size_t nmemb, size_t size) {
    int counter;
    counter = 0;
    void* res;
    if (nmemb == 0 || size == 0) {
        return NULL;
    }

    res = malloc(nmemb * size);
    ft_bzero(res, nmemb * size);
    return res;
}
int main(void)
{
    void * d = ft_calloc(12,1);
    char *check =  (char*)d;
    if(check[0] == 0)
    {
    printf("YEEEy");
    }

}