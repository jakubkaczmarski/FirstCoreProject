#include <unistd.h>
#include <stdio.h>
void ft_putendl_fd(char *s, int fd)
{
    int counter = 0;
    while(s[counter] != '\0')
    {
        counter++;
    }
    write(fd, s, counter);
    write(fd, "\n", 1);
}

int main(void)
{
    char arr[] = "Siemanko";
    ft_putendl_fd(arr, 1);
}
