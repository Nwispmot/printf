#include "libft.h"

double ft_pow(double x, double y)
{
	double ret;

	ret = x;

	while (y-- > 0)
		ret *= x;
	return(ret);
}
