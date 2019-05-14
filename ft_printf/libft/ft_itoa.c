/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <nwispmot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:42:26 by nwispmot          #+#    #+#             */
/*   Updated: 2018/12/18 18:54:17 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	ft_count(intmax_t n)
{
	int size;
	int t;

	size = 0;
	t = 0;
	if (n < 0)
	{
		n *= -1;
		t++;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size + t);
}

static char	ft_number(intmax_t n)
{
	int t;

	t = n % 10;
	return (t + '0');
}

char		*ft_itoa(intmax_t n)
{
	char	*fresh;
	long long 	i;
	int	size;
	long long 	j;


	j = 0;
	if (n <= -9223372036854775807)
		fresh = (ft_strdup("-9223372036854775808"));
	else if (n >= 9223372036854775807)
		fresh = (ft_strdup("9223372036854775807"));
	else
	{
		size = ft_count(n);
		i = size - 1;
		if (!(fresh = (char *) malloc((size + 1) * sizeof(char))))
			return (NULL);
		fresh[0] = '-';
		if (n < 0) {
			n *= -1;
			j++;
		}
		while (j++ < size) {
			fresh[i--] = ft_number(n);
			n = n / 10;
		}
		fresh[size] = '\0';
	}
	return (fresh);
}
