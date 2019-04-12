#include "ft_printf.h"

int main()
{
	printf(" |%d\n", printf("%----4c |%1c", '\0', '\n'));
	printf(" |%d\n", ft_printf("%----4c |%1c", '\0', '\n'));
	return (0);
}
