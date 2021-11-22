#include <unistd.h>
#include <stdlib.h>
char *ft_itoa(int n)
{
  
    char res;
    int counter;
    int negative;

    negative = 0;
    counter = 0;
    
    int  num = n;
    if(n < 0)
    {
        negative = 1;
        n *= -1;
        counter++;
    }
    while(num != 0)
    {
        counter++;
        num = num / 10;
    }

    char *arr = malloc(sizeof(char) * counter);
    if(negative == 1)
    {
        arr[0] = '-';
    }
    counter--;
    
    while (n != 0)
    {
        arr[counter] = n % 10 + '0';
        counter--;
        n /= 10;
    }   
    return arr;
}
void ft_putnbr_fd(int n, int fd)
{
    char *arr = ft_itoa(n);
    int counter;
    counter = 0;
    
    while(arr[counter] != '\0')
    {
        counter++;
    }
    write(fd, arr, counter);

}

int main(void)
{
    ft_putnbr_fd(-21,1);
}