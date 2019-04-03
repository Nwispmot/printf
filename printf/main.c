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


void addflag(t_pf *pf, char *str, int i)
{
	if (str[i] == ' ')
		pf->flags[space] = 1;
	if (str[i] == '#')
		pf->flags[sharp] = 1;
	if (str[i] == '-')
		pf->flags[minus] = 1;
	if (str[i] == '+')
		pf->flags[plus] = 1;
	if (str[i] == '0')
		pf->flags[zero] = 1;
}

void addprec(t_pf *pf, char *str, int i)
{
	pf->flags[prec] = ft_atoi(str);
}
int parse(char *str, t_pf *pf)
{
	int i;
	i = 1;
	while (str[i] == '#' || str[i] == '0' || str[i] == '-' || str[i] == '+'
	|| str[i] == ' ' || str[i] == 'l' || str[i] == 'L' || str[i] == 'h' || str[i] == 'H' || str[i] == '.' || ft_isalnum(str[i]) == 1)
	{
		if (str[i] == '#' || str[i] == '0' || str[i] == '-' || str[i] == '+' || str[i] == ' ')
			addflag(pf, str, i);
		if (str[i] == '.')
			addprec(pf, &str[i + 1], i);
		i++;
	}
	return (i);
}

void init(t_pf *pf)
{
	int i;

	i = 0;
	pf->flags[last] = '\0';
	while (i < last)
	{
		pf->flags[i] = 0;
		printf("%d ", pf->flags[i]);
		i++;
	}
	printf("\n");
}
int ft_printf(char *string, ...)
{
	int i;
	int j = 0; //del

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
		}
	}
	while (j < last)
	{
		printf("%d ", pf->flags[j]);
		j++;
	}
	va_end(ap);
	return (0);
}

int main()
{
	//printf("111");
	ft_printf("abcd%#.15- \n");
	return(0);
}