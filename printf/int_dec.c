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

void conv_di(t_pf *pf, va_list ap)
{
	intmax_t n;
	char *str;
	char *pre;
	char *fr;
	int plen;
	int i;

	i = 0;
	n = va_arg(ap, long long int);
	if(pf->flags[l] == 1)
		n = (long int)n;
	else if(pf->flags[ll] == 1)
		n = (long long int)n;
	else if(pf->flags[h] == 1)
		n = (short int)n;
	else if(pf->flags[hh] == 1)
		n = (signed char)n;
	else
		n = (int)n;

	str = ft_itoa(n);
	if (pf->flags[prec] > (int)(ft_strlen(str)) || ( pf->flags[prec] > (int)(ft_strlen(str) - 1) && ft_strchr(str, '-') != NULL))
	{
		plen = pf->flags[prec] - (int)ft_strlen(str);
		if (n < 0)
			plen++;
		pre = (char*)malloc((sizeof(char)) * (plen + 1));
		while(i < plen)
		{
			pre[i] = '0';
			i++;
		}
		if (n < 0)
		{
			pre[0] = '-';
			str[0] = '0';
		}
		pre[i] = '\0';
		fr = str;
		str = ft_strjoin(pre, str);
		ft_strdel(&pre);
		ft_strdel(&fr);
	}
	if (pf->flags[space] == 1 && n > 0)
	{
		pre = (char*)malloc((sizeof(char)) * (2));
		pre[0] = ' ';
		pre[1] = '\0';
		fr = str;
		str = ft_strjoin(pre, str);
		ft_strdel(&fr);
		ft_strdel(&pre);
	}
	pf->size += ft_strlen(str);
	ft_putstr(str);
}