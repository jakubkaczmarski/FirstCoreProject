#include <unistd.h>
void ft_putstr_fd(char* s, int fd)
{
    int counter = 0;
    while(s[counter] != '\0')
    {
        counter++;
    }
    write(fd, s, counter);
}

int main(void)
{
    char arr[] = "Siemanko";
    ft_putstr_fd(arr, 1);
}