/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:57:43 by nwispmot          #+#    #+#             */
/*   Updated: 2019/04/15 18:57:45 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void conv_u(t_pf *pf, va_list ap)
{
	uintmax_t n;
	char *str;
	char *pre;
	char *fr;
	int i = 0;
	int len = 0;

	if(pf->flags[l] == 1)
		n = va_arg(ap,unsigned long int);
	else if(pf->flags[ll] == 1)
		n = va_arg(ap,unsigned long long int);
	else
		n = va_arg(ap,unsigned int);
	if (pf->flags[h] == 1)
		n = (unsigned short int)n;
	if (pf->flags[hh] == 1)
		n = (unsigned char)n;

	str = ft_utoa(n);
	if (pf->flags[prec] > (int)(ft_strlen(str)) || ( pf->flags[prec] > (int)(ft_strlen(str) - 1) && ft_strchr(str, '-') != NULL))
	{
		len = pf->flags[prec] - (int)ft_strlen(str);
		pre = (char*)malloc((sizeof(char)) * (len + 1));
		while(i < len)
		{
			pre[i] = '0';
			i++;
		}
		pre[i] = '\0';
		fr = str;
		str = ft_strjoin(pre, str);
		ft_strdel(&pre);
		ft_strdel(&fr);
	}
	else if (pf->flags[prec] == 0 && str[0] == '0' && str[1] == '\0')
		str[0] = '\0';
	if (pf->flags[space] == 1)
	{
		pre = (char*)malloc((sizeof(char)) * (2));
		pre[0] = ' ';
		pre[1] = '\0';
		fr = str;
		str = ft_strjoin(pre, str);
		ft_strdel(&fr);
		ft_strdel(&pre);
	}
	if (pf->flags[width] != 0)
	{
		if (pf->flags[width] > (int) ft_strlen(str))
		{
			str = iwidth(pf, str, n);
		}
	}
	pf->size += ft_strlen(str);
	ft_putstr(str);
}
