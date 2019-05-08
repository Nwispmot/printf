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

static size_t	digit_count(unsigned long long nb, int base)
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
    if (uppercase == 0)
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