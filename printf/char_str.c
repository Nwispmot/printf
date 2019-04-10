/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:07:37 by nwispmot          #+#    #+#             */
/*   Updated: 2019/04/10 20:31:10 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_c(t_pf *pf, va_list ap)
{
	char c;

	c = (char)va_arg(ap, int);
	pf->size++;
	ft_putchar((unsigned char)c);
}

void	conv_s(t_pf *pf, va_list ap)
{
	char	*s;
	int		i;

	i = 0;
	s = va_arg(ap, char *);
	if (pf->flags[prec] == -1)
	{
		ft_putstr(s);
		pf->size += ft_strlen(s);
		return ;
	}
	else
	{
		while (i < pf->flags[prec] && s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	pf->size += i;
}
