#include "ft_printf.h"

char    *ftoa(t_pf *pf, long double value)
{
    int len;
    char *ret;

    if (pf->flags[prec] != -1)
        len = pf->flags[prec];
    else
        len = 6;
    ret = (char *)malloc(sizeof(char) * (len + 1));
    return (ret);
}

void conv_f(t_pf *pf, va_list ap)
{
    long double n;
    char *str;
    char *integer;

    if (pf->flags[L] == 1)
        n = va_arg(ap,  long double);
    else
        n = va_arg(ap,  double);

    integer = ft_itoa(n);
    str = ftoa(pf ,n);
    pf->size += ft_strlen(str);
    ft_putstr(str);
}