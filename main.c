#include "libft.h"

int main()
{
    char *str1 = NULL;
    char *str2 = NULL;

    str1 = ft_strdup("123456789");
    str2 = ft_strdup("123456789");

    ft_memmove(str1,str2 + 1, 4);
    ft_putstr_fd(str1,1);
    ft_putchar_fd('\n',1);
    ft_putstr_fd(str2,1);
}
