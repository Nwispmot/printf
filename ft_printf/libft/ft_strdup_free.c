#include "libft.h"

char	*ft_strdup_free(const char *s1, char *str)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	if (!(s2 = (char*)malloc((i + 1) * sizeof(char))))
		return (NULL);
	while (j < i)
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	free(str);
	return (s2);
}