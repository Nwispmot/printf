#include "ft_printf.h"

char *ft_sharp(char *str)
{
	char *mem;

    if (str[0] != '0')
    {
    	mem = str;
		str = ft_strjoin("0", str);
		free(mem);
	}
    return(str);
}

void conv_percent(t_pf *pf, va_list ap)
{
    int i;

	ap = NULL;
    i = -1;
    if (pf->flags[width] != 0)
    {
        if (pf->flags[minus] == 1)
            pf->size += write(1 , "%", 1);
        while (++i < pf->flags[width] - 1)
        {
            if (pf->flags[zero] == 1)
                pf->size += write(1, "0", 1);
            else
                pf->size += write(1, " ", 1);
        }
    }
    if (pf->flags[minus] != 1)
        pf->size += write(1 , "%", 1);
}