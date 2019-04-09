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
}

void conv_di(t_pf *pf, va_list ap)
{
	intmax_t n;
	char *str;
	char *pre;
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
	if (pf->flags[prec] > (int)(ft_strlen(str)))
	{
		plen = pf->flags[prec] - (int)ft_strlen(str);
		pre = (char*)malloc((sizeof(char)) * (plen + 1));
		while(i < plen)
		{
			pre[i] = '0';
			i++;
		}
		pre[i] = '\0';
		str = ft_strjoin(pre, str);
	}
	pf->size += ft_strlen(str);
	ft_putstr(str);
}

void conv_s(t_pf *pf, va_list ap)
{
	char *s;
	int i;

	i = 0;
	s = va_arg(ap, char *);
	while (i < pf->flags[prec] && s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	pf->size += i;
}

void conv_u(t_pf *pf, va_list ap)
{
	intmax_t n;
	char *str;
	char *pre;
	int plen;
	int i;

	i = 0;
	n = va_arg(ap, unsigned long int);
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

void conv_c(t_pf *pf, va_list ap)
{
	char c;
	int i;

	i = 0;
	c = (char)va_arg(ap, int);
	pf->size++;
	ft_putchar((unsigned char)c);
}

void conversion(t_pf *pf, va_list ap)
{
	if(pf->convers == 'd' || pf->convers == 'i')
		conv_di(pf, ap);
	if(pf->convers == 's')
		conv_s(pf, ap);
	if(pf->convers == 'c')
		conv_c(pf, ap);


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
			pf->size++;
		}
		else
			pf->size++;
		write(1, &string[i], 1);
	}
	va_end(ap);
	return (pf->size);
}

int main()
{
	printf("%d\n", printf("abc %c %d |", 'f', -15));
	printf("%d\n", ft_printf("abc %c %d |", 'f', -15));

	return(0);
}