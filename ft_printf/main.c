#include "ft_printf.h"

int main()
{
	//printf(" |%d\n", printf("c%-c ??", 0));
	//printf(" |%d\n", ft_printf("c%-c ??", 0));
	printf(" |%d\n", printf("%+010lld", 0));
	printf(" |%d\n", ft_printf("%+010lld", 0));
	return (0);
}
