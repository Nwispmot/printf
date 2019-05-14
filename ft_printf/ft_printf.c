/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:08:50 by nwispmot          #+#    #+#             */
/*   Updated: 2019/04/01 18:08:52 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//char *max(t_pf *pf, long double value)
//{
//	char *ret;
//	char *integer;
//	int len;
//	int i;
//
//	i = 0;
//	if (pf->flags[prec] != -1)
//		len = pf->flags[prec] + 1;
//	else
//		len = 7;
//	if (value <= -9223372036854775807)
//		integer = (ft_strdup("-9223372036854775808"));
//	else if (value >= 9223372036854775807)
//		integer = (ft_strdup("9223372036854775808"));
//	ret = (char *)malloc(sizeof(char) * (len + 1));
//	while (++i < len)
//		ret[i] = '0';
//	ret[0] = '.';
//	return(ft_strjoin(integer, ret));
//}

void init(t_pf *pf)
{
	int i;

	i = 0;
	pf->flags[12] = '\0';
	while (i < 13)
	{
		pf->flags[i] = 0;
		i++;
	}
	pf->flags[prec] = -1;
}

void conversion(t_pf *pf, va_list ap)
{
	if(pf->convers == 'd' || pf->convers == 'i')
		conv_di(pf, ap);
	else if(pf->convers == 's')
		conv_s(pf, ap);
	else if(pf->convers == 'c')
		conv_c(pf, ap);
	else if(pf->convers == 'u')
		conv_u(pf, ap);
	else if(pf->convers == 'o')
		conv_o(pf, ap);
	else if(pf->convers == 'x')
        conv_lx(pf, ap);
	else if(pf->convers == 'X')
        conv_ux(pf, ap);
	else if(pf->convers == '%')
        conv_percent(pf, ap);
	else if(pf->convers == 'p')
        conv_p(pf, ap);
	else if(pf->convers == 'f')
        conv_f(pf, ap);
//	else if(pf->convers == '\0')
//		return;
//	else
//		pf->size += write(1, &pf->convers, 1);
}

int ft_printf(char *string, ...)
{
	int i;
	va_list ap;
	t_pf *pf;

	pf = (t_pf*)malloc(sizeof(t_pf));
	pf->size = 0;
	i = -1;
	va_start(ap, string);
	while(string[++i])
	{
		if (string[i] == '%')
		{
			init(pf);
			i += parse(&string[i], pf);
			conversion(pf, ap);
			if (string[i] == '\0')
				break;
			pf->size++;
		}
		else
			pf->size++;
//		if(pf->convers == '\0')
//			return(0);
		if(string[i] != '%')
			write(1, &string[i], 1);
		else
		{
			i--;
			pf->size--;
		}
	}
	va_end(ap);
	return (pf->size);
}
