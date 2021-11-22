#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *ch){
    size_t counter = 0;
    while(*ch != '\0')
    {
        ch++;
        counter++;
    }
    return counter;
}
static int charFoundinASet(const char* set, char a)
{
    int i = 0;
    while (set[i])
    {
        if(set[i] == a)
        {
            return 1;
        }
        i++;
    }
    return 0;
    
}
char* ft_strtrim(char const* s1, char const* set) {
    int start;
    int finish;
    int i;
    char *resStr;
    start = 0;
    i = 0;
    while(s1[start] && charFoundinASet(set, s1[start]))
    {
        start++;
    }
    finish = ft_strlen((char*)s1);
    while(s1[finish - 1] && charFoundinASet(set, s1[finish - 1]))
    {
        finish--;
    }
    resStr = malloc(sizeof(char) * (finish - start + 1));
    i = 0;
    while(finish > start)
    {
        resStr[i] = s1[start];
        start++;
        i++;
    }
    return resStr;

}

int main(void) {
    char arr[] = "HelloH";
    char *arr1 = ft_strtrim(arr, "He");
    printf("%s", arr1);
}