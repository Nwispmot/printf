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
	if(pf->convers == 's')
		conv_s(pf, ap);
	if(pf->convers == 'c')
		conv_c(pf, ap);
	if(pf->convers == 'u')
		conv_u(pf, ap);
	if(pf->convers == 'o')
		conv_o(pf, ap);
    if(pf->convers == 'x')
        conv_lx(pf, ap);
    if(pf->convers == 'X')
        conv_ux(pf, ap);
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
