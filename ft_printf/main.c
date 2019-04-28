#include "ft_printf.h"

int main()
{
	printf(" |%d\n", printf("% 2.47hx", 500481260));
	printf(" |%d\n", ft_printf("% 2.47hx", 500481260));
	return (0);
}
