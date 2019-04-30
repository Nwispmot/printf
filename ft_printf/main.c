#include "ft_printf.h"

int main()
{
	printf(" |%d\n", printf("%", 42));
	printf(" |%d\n", ft_printf("%O", 42));
	return (0);
}
