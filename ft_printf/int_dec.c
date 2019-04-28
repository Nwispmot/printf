/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:05:56 by nwispmot          #+#    #+#             */
/*   Updated: 2019/04/10 20:05:58 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *iplus(char *str)
{
	char *plus;
	char *fresh;

	plus = ft_strdup("+");
	fresh = ft_strjoin(plus, str);
	return (fresh);
}

char *iprec(t_pf *pf, char *str)
{
	int len;
	int i;
	char *pre;

	i = 0;
	len = pf->flags[prec] - (int)ft_strlen(str);
	if (ft_strchr(str, '-') != NULL || ft_strchr(str, '+') != NULL)
		len++;
	pre = (char*)malloc((sizeof(char)) * (len + 1));
	while(i < len)
	{
		pre[i] = '0';
		i++;
	}
	if (ft_strchr(str, '-') != NULL)
	{
		pre[0] = '-';
		str[0] = '0';
	}
	if (ft_strchr(str, '+') != NULL)
	{
		pre[0] = '+';
		str[0] = '0';
	}
	pre[i] = '\0';
	str = ft_strjoin(pre, str);
	ft_strdel(&pre);
	return (str);
}

void conv_di(t_pf *pf, va_list ap)
{
	intmax_t n;
	char *str;
	char *pre;

	if(pf->flags[l] == 1)
		n = va_arg(ap, long int);
	else if(pf->flags[ll] == 1)
		n = va_arg(ap, long long int);
	else
		n = va_arg(ap, int);
	if(pf->flags[h] == 1)
		n = (short int)n;
	if(pf->flags[hh] == 1)
		n = (signed char) n;

	str = ft_itoa(n);
	if (pf->flags[plus] == 1 && n > 0)
		str = iplus(str);
	if (pf->flags[prec] >= (int)(ft_strlen(str)) || ( pf->flags[prec] > (int)(ft_strlen(str) - 1) && ft_strchr(str, '-') != NULL))
		str = iprec(pf, str);
	else if (pf->flags[prec] == 0 && str[0] == '0' && str[1] == '\0')
		str[0] = '\0';
	pre = ft_strdup(" ");
	if (pf->flags[plus] == 1 && n == 0)
		str = iplus(str);
	if (pf->flags[space] == 1 && n >= 0)
		str = ft_strjoin(pre, str);
	if (pf->flags[width] != 0 && (pf->flags[width] > (int)ft_strlen(str)))
		str = iwidth(pf, str, n);
	pf->size += ft_strlen(str);
	ft_putstr(str);
}