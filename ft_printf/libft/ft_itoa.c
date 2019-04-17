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

static long long int	ft_count(long long int n)
{
	long long int size;
	int t;

	size = 0;
	t = 0;
	if (n < 0)
	{
		n = -n;
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

static char	ft_number(long long int n)
{
	int t;

	t = n % 10;
	return (t + '0');
}

char		*ft_itoa(long long int n)
{
	char	*fresh;
	long long 	i;
	long long int	size;
	long long int	j;

	j = 0;
//	if (n == -2147483648)
//		return (ft_strdup("-2147483648"));
	size = ft_count(n);
	i = size - 1;
	if (!(fresh = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	fresh[0] = '-';
	if (n < 0)
	{
		n = -n;
		j++;
	}
	while (j++ < size)
	{
		fresh[i--] = ft_number(n);
		n = n / 10;
	}
	fresh[size] = '\0';
	return (fresh);
}
