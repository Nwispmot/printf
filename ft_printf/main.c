#include "ft_printf.h"

int main()
{
    long double d;
	printf(" |%d\n", printf("%+010#%", -9223372036854775808.000000));
	printf(" |%d\n", ft_printf("%+010#%", -9223372036854775808.000000));
	return (0);
}
