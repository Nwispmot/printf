#include "ft_printf.h"

char *ft_sharp(char *str)
{
    char *hash;

    hash = ft_strdup("0");
    if (str[0] != '0')
        str = ft_strjoin(hash, str);
    return(str);
}