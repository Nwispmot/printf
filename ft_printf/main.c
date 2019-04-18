#include "ft_printf.h"

int main()
{
	printf(" |%d\n", printf("% 2d", 734745068));
	printf(" |%d\n", ft_printf("% 2d", 734745068));
	return (0);
}
