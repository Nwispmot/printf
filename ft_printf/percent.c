#include "ft_printf.h"

void conv_percent(t_pf *pf, va_list ap)
{
    int i;

    i = -1;
    if (pf->flags[width] != 0)
    {
        while (++i < pf->flags[width] - 1)
            pf->size += write(1 , " ", 1);
    }
    pf->size += write(1 , "%", 1);
}