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

int		cwidth(t_pf *pf)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < pf->flags[width] - 1)
	{
		if (pf->flags[zero] == 1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
		i++;
	}
	return (count);
}

void	conv_c(t_pf *pf, va_list ap)
{
	char		c;

	c = (char)va_arg(ap, int);
	if (pf->flags[minus] == 1)
	{
		pf->size += write(1, &c, 1);
		pf->size += cwidth(pf);
	}
	else if (pf->flags[minus] == 0)
	{
		pf->size += cwidth(pf);
		pf->size += write(1, &c, 1);
	}
}

void	conv_s(t_pf *pf, va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = ft_strdup("(null)");
	if (pf->flags[prec] != -1)
		s = ft_strsub(s, 0, (size_t)pf->flags[prec]);
	if (pf->flags[width] != 0)
	{
		if (pf->flags[width] > (int)ft_strlen(s))
			s = swidth(pf, s);
	}
	pf->size += ft_strlen(s);
	ft_putstr(s);
}
