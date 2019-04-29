#include "ft_printf.h"

int main()
{
	printf(" |%d\n", printf("%#010x", 85445236));
	printf(" |%d\n", ft_printf("%#010x", 85445236));
	return (0);
}
