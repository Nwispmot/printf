#include "ft_printf.h"

char    *ftoa(t_pf *pf, long double value)
{
    int len;
    long double bval;
    long long t;
    int re;
    int i = 0;
    char *ret;
    char *integer;

	bval = value;
	re = 0;
	integer = ft_itoa(value);
    if (value < 0)
		value *= -1;
    if (pf->flags[prec] != -1)
        len = pf->flags[prec] + 1;
    else
        len = 7;
    t = (long long)value;
    value -= t;
    ret = (char *)malloc(sizeof(char) * (len + 1));
    ret[0] = '.';
    ret[len] = '\0';
    while (++i < len)
    {
        value *= 10;
        t = (int)value;
        ret[i] = (char)(value + '0');
        value -= t;
    }
    value *= 10;
    if (value >= 5)
    {
    	if (ret[i - 1] == '9')
    	{
    		re = 1;
			bval = bval >= 0 ?  bval + (1 / ft_pow(10,i)) : bval - (1 / ft_pow(10,i));
		}
    	if (pf->flags[prec] == 0)
    		return(ft_itoa(bval + 1));
        t++;
        ret[i - 1] = (char) (t + '0');
    }
	ret = ft_strjoin(integer, ret);
    if (re == 1)
    	ret = ftoa(pf, bval);
    return(len > 1 ? ret : integer);
}


void conv_f(t_pf *pf, va_list ap)
{
    long double n;
    char *str;
    char *pre;

    if (pf->flags[L] == 1)
        n = va_arg(ap,  long double);
    else {
		n = va_arg(ap, double);
	}
    if (pf->flags[prec] == 0)
    {
		str = ftoa(pf, n);
		if(pf->flags[sharp] == 1)
			str	= ft_strjoin(str , ".");
	}
    else
        str = ftoa(pf, n);
	if (n != n)
		str = ft_strdup("nan");
	if (n == +1 / 0.0)
		str = ft_strdup("inf");
	if (n == -1 / 0.0)
		str = ft_strdup("-inf");

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