#include "ft_printf.h"

char *iplus(char *str)
{
	char *plus;
	char *fresh;

	plus = ft_strdup("+");
	fresh = ft_strjoin(plus, str);
	return (fresh);
}