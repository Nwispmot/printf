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
		//printf("%d ", pf->flags[i]);
		i++;
	}
	pf->flags[prec] = -1;
	printf("\n");
}


void conversion(t_pf *pf, va_list ap)
{
	intmax_t n;
	char *str;
	char *pre;
	int plen;
	int i = 0;

	n = 0;
	if(pf->convers == 'd' || pf->convers == 'i')
	{
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
	}
	str = ft_itoa(n);
	if (pf->flags[prec] > ft_strlen(str))
	{
		plen = pf->flags[prec] - (int)ft_strlen(str);
		printf("{p=%d}",plen);
		pre = (char*)malloc((sizeof(char)) * (plen + 1));
		while(i < plen)
		{
			pre[i] = '0';
			i++;
		}
		pre[i] = '\0';
		printf(" {%d} ", ft_strlen(pre));
		str = ft_strjoin(pre, str);
	}
	ft_putstr(str);
}

int ft_printf(char *string, ...)
{
	int i;

	va_list ap;
	t_pf *pf;
	pf = (t_pf*)malloc(sizeof(t_pf));
	init(pf);
	i = -1;
	va_start(ap, string);
	while(string[++i])
	{
		if (string[i] == '%')
		{
			i += parse(&string[i], pf);
			conversion(pf, ap);
		}
		write(1, &string[i], 1);
	}
	va_end(ap);
	return (i);
}

int main()
{
	printf("%d\n", printf("abc %.12d |", 12345678));
	printf("%d\n", ft_printf("abc %.12d |", 12345678));

	return(0);
}