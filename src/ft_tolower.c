int ft_tolower(int c)
{
    if(c <= 'Z' && c >= 'A')
    {
        return c + 32;
    }else{
        return c;
    }
}