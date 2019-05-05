#include "ft_printf.h"

int main()
{
	printf(" |%d\n", printf("%f", 42.1923));
	printf(" |%d\n", ft_printf("%f", 42.1923));
	return (0);
}
