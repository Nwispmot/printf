/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <nwispmot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:42:26 by nwispmot          #+#    #+#             */
/*   Updated: 2018/12/13 23:33:24 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	int		i;
//	int		j;
//	int		len;
//	char	*fresh;
//
//	i = 0;
//	j = 0;
//	if (!s1 || !s2)
//		return (0);
//	len = ft_strlen(s1) + ft_strlen(s2);
//	if (!(fresh = (char*)malloc((len + 1) * sizeof(char))))
//		return (NULL);
//	while (s1[i])
//	{
//		fresh[i] = s1[i];
//		i++;
//	}
//	while (s2[j])
//	{
//		fresh[i] = s2[j];
//		i++;
//		j++;
//	}
//	fresh[i] = '\0';
//	return (fresh);
char	*ft_strjoin(char const *s1, char const *s2) {
	char *s3;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (!(s3 = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(s3, s1);
	ft_strcat(s3, s2);
	return (s3);
}
