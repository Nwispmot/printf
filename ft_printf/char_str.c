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
	char	c;
	char	s[2];
	char	*str;

	c = (char)va_arg(ap, int);
	s[0] = (unsigned char)c;
	s[1] = '\0';
	if (pf->flags[width] != 0)
			str = swidth(pf, s);
	else
	{
		pf->size++;
		ft_putstr(s);
		return ;
	}
	pf->size += ft_strlen(str);
	ft_putstr(str);
}

void	conv_s(t_pf *pf, va_list ap)
{
	char	*s;
	s = va_arg(ap, char *);
	if (s == NULL)
		s = ft_strdup("(null)");
	if (pf->flags[prec] != -1)
		s = ft_strsub(s, 0, (size_t)pf->flags[prec]);
	if (pf->flags[width] != 0)
	{
		if (pf->flags[width] > (int) ft_strlen(s))
		{
			s = swidth(pf, s);
		}
	}
	pf->size += ft_strlen(s);
	ft_putstr(s);
}
