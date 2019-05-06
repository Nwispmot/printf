#include "ft_printf.h"

char    *ftoa(t_pf *pf, long double value)
{
    int len;
    int *d;
    int t;
    int i = 0;
    char *ret;

    if (value < 0)
        value *= -1;
    if (pf->flags[prec] != -1)
        len = pf->flags[prec] + 1;
    else
        len = 7;
    t = (int)value;
    value -= t;
    ret = (char *)malloc(sizeof(char) * (len + 1));
    d = (int *)malloc(sizeof(int) * (len - 1));
    ret[0] = '.';
    ret[len] = '\0';
    while (++i < len)
    {
        value *= 10;
        t = (int)value;
        ret[i] = (char)(value + '0');
        d[i] = (int)value;
        value -= t;
    }
    value *= 10;
    if (value >= 5)
    {
        t++;
        ret[i - 1] = (char) (t + '0');
    }
    return (ret);
}


void conv_f(t_pf *pf, va_list ap)
{
    long double n;
    char *str;
    char *integer;
    char *pre;

    if (pf->flags[L] == 1)
        n = va_arg(ap,  long double);
    else
        n = va_arg(ap,  double);

    integer = ft_itoa(n);
    if (pf->flags[prec] == 0)
        str = integer;
    else
    {
        str = ftoa(pf, n);
        str = ft_strjoin(integer, str);
    }

    if (pf->flags[plus] == 1 && n > 0)
        str = iplus(str);
    pre = ft_strdup(" ");
    if (pf->flags[plus] == 1 && n == 0)
        str = iplus(str);
    if (pf->flags[space] == 1 && n >= 0)
        str = ft_strjoin(pre, str);
    if (pf->flags[width] != 0 && (pf->flags[width] > (int)ft_strlen(str)))
        str = fwidth(pf, str, n);

    pf->size += ft_strlen(str);
    ft_putstr(str);
}