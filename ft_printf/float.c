#include "ft_printf.h"

char    *ftoa(t_pf *pf, long double value, int re)
{
	int len;
	long double bval;
	long long t;
	int i = 0;
	char *ret;
	char *integer;

	bval = value;
	re++;
	integer = ft_ltoa(value);
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
			return(ft_ltoa(bval));
		}
		t++;
		ret[i - 1] = (char) (t + '0');
	}
	ret = ft_strjoin_free(integer, ret, 0, 1);
	if (re == 1)
	{
//		free(integer);
		free(ret);
		ret = ftoa(pf, bval, re);
	}
	if (len > 1)
	{
		//if(re != 1)
			free(integer);
		return (ret);
	}
	else
	{
		//if ()
		free(ret);
		return(integer);
	}
}

static char *fcheck(t_pf *pf, long double	n, char *str)
{
	char *del;

	if (n != n)
	{
		del = str;
		str = ft_strdup("nan");
		free(del);
	}
	if (n == +1 / 0.0)
	{
		del = str;
		str = ft_strdup("inf");
		free(del);
	}
	if (n == -1 / 0.0)
	{
		del = str;
		str = ft_strdup("-inf");
		free(del);
	}
	if (pf->flags[plus] == 1 && n > 0)
		str = iplus(str);
	if (pf->flags[plus] == 1 && n == 0)
		str = iplus(str);
	if (pf->flags[space] == 1 && n >= 0)
		str = ft_strjoin_free(" ", str, 0, 1);
	if (pf->flags[width] != 0 && (pf->flags[width] > (int)ft_strlen(str)))
		str = fwidth(pf, str, n);
	return (str);
}

void conv_f(t_pf *pf, va_list ap)
{
    long double	n;
    char		*str;

    if (pf->flags[L] == 1)
        n = va_arg(ap,  long double);
    else
		n = va_arg(ap, double);
    if (pf->flags[prec] == 0)
    {
		str = ftoa(pf, n, -1);
		if(pf->flags[sharp] == 1)
			str = ft_strjoin_free(str, ".", 1, 0);
	}
    else
        str = ftoa(pf, n, -1);
	str = fcheck(pf, n, str);
    pf->size += ft_strlen(str);
    ft_putstr(str);
    free(str);
}