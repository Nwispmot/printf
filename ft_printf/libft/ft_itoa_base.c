/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:50:16 by nwispmot          #+#    #+#             */
/*   Updated: 2019/04/20 20:50:19 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static int	ft_count(unsigned long long n, int base)
//{
//	int size;
//    unsigned long long b;
//
//    b = (unsigned long long)base;
//	size = 0;
//	while (n > b)
//	{
//		n = n / b;
//		size++;
//	}
//	size++;
//	return (size);
//}
//
//
//char		*ft_itoa_base(unsigned long long n, int base, int uppercase)
//{
//	char	*fresh;
//	char    *str;
//	int		size;
//	int		res;
//
//	size = ft_count(n, base);
//	if (!(fresh = (char*)malloc((size + 1) * sizeof(char))))
//		return (NULL);
//	fresh[size] = '\0';
//	if (!uppercase)
//        str = "0123456789abcdef";
//    else
//        str = "0123456789ABCDEF";
//	while (size >= 0)
//	{
//        res = n % base;
//        fresh[size] = str[res];
//        n = n / base;
//        size--;
//	}
//	return (fresh);
//}


static size_t	digit_count(long nb, int base)
{
    size_t		i;

    i = 0;
    while (nb)
    {
        nb /= base;
        i++;
    }
    return (i);
}

char			*ft_itoa_base(unsigned long long value, int base, int uppercase)
{
    char	*ret;
    char	*tab_base;
    int		len;
    int		i;

    if (base < 2 || base > 16)
        return (0);
    if (value == 0)
        return ("0");
    if (!uppercase)
        tab_base = "0123456789abcdef";
    else
        tab_base = "0123456789ABCDEF";
    len = digit_count(value, base);
    ret = (char *)malloc(sizeof(char) * (len + 1));
    i = 1;
    while (value != 0)
    {
        ret[len - i++] = tab_base[value % base];
        value /= base;
    }
    ret[len] = '\0';
    return (ret);
}