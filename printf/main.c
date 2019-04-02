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

#include "printf.h"


void addflag(t_pf *pf, char *str, int i)
{
	if (str[i] == ' ')
		pf->fl_space = 1;
	if (str[i] == '#')
		pf->fl_sharp = 1;
	if (str[i] == '-')
		pf->fl_minus = 1;
	if (str[i] == '+')
		pf->fl_plus = 1;
	if (str[i] == '0')
		pf->fl_zero = 1;
}

void addprecision(t_pf *pf, char *str, int i)
{
	i++;
	pf->precision = ft_atoi(&str[i]);
}

int parse(char *str, t_pf *pf)
{
	int i;
	i = 1;
	while (str[i] == '#' || str[i] == '0' || str[i] == '-' || str[i] == '+'
	|| str[i] == ' ' || str[i] == 'l' || str[i] == 'L' || str[i] == 'h' || str[i] == 'H')
	{
		if (str[i] == '#' || str[i] == '0' || str[i] == '-' || str[i] == '+' || str[i] == ' ')
			addflag(pf, str, i);
		if (str[i] == '.')
			pf->fl_zero = 1;
		i++;
	}
	return (0);
}

void init(t_pf *pf)
{
	pf = (t_pf*)malloc(sizeof(t_pf));
	pf->fl_minus = 0;
	pf->fl_plus = 0;
	pf->fl_sharp = 0;
	pf->fl_zero = 0;
	pf->fl_space = 0;
}
int ft_printf(char *string, ...)
{
	int i;

	va_list ap;
	t_pf *pf;
	pf = NULL;
	init(pf);
	i = 0;
	va_start(ap, string);
	while(string[i++])
	{
		if (string[i] == '%')
		{
			parse(string, pf);
		}
	}
	printf("pre = %d", pf->precision);
	va_end(ap);
	return (0);
}

int main()
{
	printf("111");
	ft_printf("%.20 456\n");
	return(0);
}