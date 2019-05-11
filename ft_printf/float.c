#include "ft_printf.h"

char *max(t_pf *pf, long double value)
{
	char *ret;
	char *integer;
	int len;
	int i;

	i = 0;
	if (pf->flags[prec] != -1)
		len = pf->flags[prec] + 1;
	else
		len = 7;
	if (value <= -9223372036854775807)
		integer = (ft_strdup("-9223372036854775808"));
	else if (value >= 9223372036854775807)
		integer = (ft_strdup("9223372036854775808"));
	ret = (char *)malloc(sizeof(char) * (len + 1));
	while (++i < len)
		ret[i] = '0';
	ret[0] = '.';
	return(ft_strjoin(integer, ret));
}

char *ft_col(char *str)
{
	int i = 0;
	int new;

	while(str[i] != ':' && str[i] != '\0')
		i++;
	if (str[i] == ':')
		str[i] = '0';
	new = ft_atoi(&str[i - 1]);
	while (new > 9)
		new /= 10;
	str[i - 1] = new - '0';
	return(str);
}

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
	if (value <= -9223372036854775807 || value >= 9223372036854775807)
	{
		ret = max(pf, value);
		return (ret);
	}

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
//    	if (ret[i] == ':')
//		{
//			ret[i] = '0';
//			ret[i] = (char)((t + 1) + '0');
//		}
        t = (int)value;
        ret[i] = (char)(value + '0');
        value -= t;
    }
    value *= 10;
    if (value >= 5)
    {
    	if (ret[i - 1] == '9')
    	{
    		re++;
			bval = bval >= 0 ?  bval + (1 / ft_pow(10, i - 1)) : bval - (1 / ft_pow(10, i - 1));
		}
    	if (pf->flags[prec] == 0)
		{
    		bval++;
    		return(ft_itoa(bval));
		}
        t++;
        ret[i - 1] = (char) (t + '0');
    }
    if (ft_strchr(ret,':') != 0)
    	ret = ft_col(ret);
    ret = ft_strjoin(integer, ret);
    if (re == 1)
    	ret = ftoa(pf, bval, re);
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
		str = ftoa(pf, n, -1);
		if(pf->flags[sharp] == 1)
			str	= ft_strjoin(str , ".");
	}
    else
        str = ftoa(pf, n, -1);
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