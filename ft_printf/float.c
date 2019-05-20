#include "ft_printf.h"

char    *ftoa(t_pf *pf, long double value, int re)
{
	int len;
	long double bval;
	long long t;
	int i = 0;
	char *ret;
	char *integer;
	char *mem;

	bval = value;
	re++;
	integer = ft_itoa(value);
	if (value < 0)
		value *= -1;
	if (pf->flags[prec] != -1)
		len = pf->flags[prec] + 1;
	else
		len = 7;
	t = (long long)value;
	value -= t;
	ret = ft_strnew(len);
	ret[0] = '.';
	while (++i < len)
	{
		value *= 10;
		t = (int)value;
		ret[i] = (char)(value + '0');
		value -= t;
	}
	value *= 10;
	if (value >= 5 && re == 0)
	{
		if (ret[i - 1] == '9')
		{
			re++;
			bval = bval >= 0 ?  bval + (1 / ft_pow(10, len - 2)) : bval - (1 / ft_pow(10, len - 2));
		}
		if (pf->flags[prec] == 0)
		{
			bval > 0 ? bval++ : bval--;
			free(integer);
			free(ret);
			return(ft_itoa(bval));
		}
		t++;
		ret[i - 1] = (char) (t + '0');
	}
	mem = ret;
	ret = ft_strjoin(integer, ret);
	free(mem);
	if (re == 1)
	{
		free(integer);
		free(ret);
		ret = ftoa(pf, bval, re);
	}
	if (len > 1)
	{
		free(integer);
		return (ret);
	}
	else
	{
		free(ret);
		return(integer);
	}
}

static char *fcheck(t_pf *pf, long double	n, char *str)
{
	if (n != n)
		str = ft_strdup("nan");
	if (n == +1 / 0.0)
		str = ft_strdup("inf");
	if (n == -1 / 0.0)
		str = ft_strdup("-inf");
	if (pf->flags[plus] == 1 && n > 0)
		str = iplus(str);
	if (pf->flags[plus] == 1 && n == 0)
		str = iplus(str);
	if (pf->flags[space] == 1 && n >= 0)
		str = ft_strjoin(" ", str);
	if (pf->flags[width] != 0 && (pf->flags[width] > (int)ft_strlen(str)))
		str = fwidth(pf, str, n);
	return (str);
}

void conv_f(t_pf *pf, va_list ap)
{
    long double	n;
    char		*str;
    char 		*mem;

    if (pf->flags[L] == 1)
        n = va_arg(ap,  long double);
    else
		n = va_arg(ap, double);
    if (pf->flags[prec] == 0)
    {
		str = ftoa(pf, n, -1);
		if(pf->flags[sharp] == 1)
		{
			mem = str;
			str = ft_strjoin(str, ".");
			free(mem);
		}
	}
    else
        str = ftoa(pf, n, -1);
	str = fcheck(pf, n, str);
    pf->size += ft_strlen(str);
    ft_putstr(str);
}