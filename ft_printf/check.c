#include "ft_printf.h"


void		check(t_pf *pf, char **str, char **pre, intmax_t n)
{
	if (ft_strchr(*str, '-') != NULL && pf->flags[zero] == 1)
	{
		*pre[0] = '-';
		*str[0] = '0';
	}
	if (*str[0] == ' ' && *pre[0] == '0')
	{
		*pre[0] = ' ';
		*str[0] = '0';
	}
	if (ft_strchr(*str, '+') != NULL && n != 0 && pf->flags[zero] == 1)
	{
		*pre[0] = '+';
		*str[0] = '0';
	}
}

void		ucheck(t_pf *pf, char **str, char **pre, intmax_t n)
{
	if (ft_strchr(*str, '-') != NULL && pf->flags[zero] == 1)
	{
		*pre[0] = '-';
		*str[0] = '0';
	}
	if (*str[0] == ' ' && *pre[0] == '0')
	{
		*pre[0] = ' ';
		*str[0] = '0';
	}
	if (ft_strchr(*str, '+') != NULL && n != 0 && pf->flags[zero] == 1)
	{
		*pre[0] = '+';
		*str[0] = '0';
	}
}
