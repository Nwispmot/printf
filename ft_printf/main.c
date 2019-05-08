#include "ft_printf.h"
#include <math.h>
void float_checker()
{
//	printf("og: %015f\n", -2.0f);
//	ft_printf("my: %015f\n", -2.0f);
//	printf("FLOAT_CHECKER\n");
//	int	ret1 = printf("%f", 35.1234);
//	printf("\n");
//	int	ret2 = ft_printf("%f", 35.1234);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%018.7f", -6.1234);
//	printf("\n");
//	ret2 = ft_printf("%018.7f", -6.1234);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%+18.7f", -351.234);
//	printf("\n");
//	ret2 = ft_printf("%+18.7f", -351.234);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%9.15f", 890234.f);
//	printf("\n");
//	ret2 = ft_printf("%9.15f", 890234.f);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%-12.56f", -23.9);
//	printf("\n");
//	ret2 = ft_printf("%-12.56f", -23.9);
//	printf("\nor: %d\nmy: %d\n\n", ret1 ,ret2);
//
//	ret1 = printf("%07.f", -23.74);
//	printf("\n");
//	ret2 = ft_printf("%07.f", -23.74);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%016.23f", 323.4);
//	printf("\n");
//	ret2 = ft_printf("%016.23f", 323.4);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%023f", -3694.2);
//	printf("\n");
//	ret2 = ft_printf("%023f", -3694.2);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%f", 35.1234);
//	printf("\n");
//	ret2 = ft_printf("%f", 35.1234);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//
//	ret1 = printf("%56.28f", -1.000000);
//	printf("\n");
//	ret2 = ft_printf("%56.28f", -1.000000);
//	printf("\nor: %d\nmy: %d\n\n",ret1, ret2);
//
//	ret1 = printf("%024f", 345.123490650);
//	printf("\n");
//	ret2 = ft_printf("%024f", 345.123490650);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
	printf("%56.27f",-9223372036854775807.000000);
	printf("\n");
	ft_printf("%56.27f", -9223372036854775806.000000);
//	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
//	ft_printf("my: %f|\n", 1.00);
//	printf("og: %f|\n", 1.00);
//	ft_printf("my: %f|\n", 32.23);
//	printf("og: %f|\n", 32.23);
//	ft_printf("my: %.5f|\n", 122.358);
//	printf("og: %.5f|\n", 122.358);
//	ft_printf("my: %f|\n", -52.9);
//	printf("og: %f|\n", -52.9);
//	ft_printf("my: %f|\n", -9.88);
//	printf("og: %f|\n", -9.88);
//	ft_printf("my: %f|\n", 78.221);
//	printf("og: %f|\n", 78.221);
//	ft_printf("my: %.0lf|\n", 99999999.1213);
//	printf("og: %.0lf|\n", 99999999.1213);
//	ft_printf("my: %f|\n", 0.1223);
//	printf("og: %f|\n", 0.1223);
//	ft_printf("my: %3.f|\n", 42.123312);
//	printf("og: %3.f|\n", 42.123312);
//	ft_printf("my: %f|\n", 10.01010101);
//	printf("og: %f|\n", 10.01010101);
//	ft_printf("my: %f|\n", 0.0000);
//	printf("og: %f|\n", 0.0000);
//
//	double ff = 89.999;
//	printf("\nPRECISION\n\n");
//	ft_printf("my: %.f|\n", ff);
//	printf("og: %.f|\n", ff);
//	ft_printf("my: %.2f|\n", 189.999);
//	printf("og: %.2f|\n", 189.999);
//	ft_printf("my: %.2f|\n", 9.9999999);
//	printf("og: %.2f|\n", 9.9999999);
//	ft_printf("my: %.f|\n", 9.9999999);
//	printf("og: %.f|\n", 9.9999999);
//
//	ft_printf("my: %.f|\n", 999999.99);
//	printf("og: %.f|\n", 999999.99);
//
//	ft_printf("my: %5.1f|\n", 999999.99);
//	printf("og: %5.1f|\n", 999999.99);
//
//	ft_printf("my: %.2f|\n", 999999.99);
//	printf("og: %.2f|\n", 999999.99);
//
//	ft_printf("\n\nMIXED\n\n");
//
//
//	ft_printf("my: %.2f|\n", 9.9999999);
//	printf("og: %.2f|\n", 9.9999999);
//
//	ft_printf("my: %.f|\n", 9.9999999);
//	printf("og: %.f|\n", 9.9999999);
//
//	ft_printf("my: %.4f|\n", 3.3399999);
//	printf("og: %.4f|\n", 3.3399999);
//
//	ft_printf("my: %+010.4f|\n", 3.3399999);
//	printf("og: %+010.4f|\n", 3.3399999);
//
//	ft_printf("my: %+10.4f|\n", 3.3399999);
//	printf("og: %+10.4f|\n", 3.3399999);
//
//	ft_printf("my: %10.4f|\n", -3.3399999);
//	printf("og: %10.4f|\n", -3.3399999);
//
//	ft_printf("my: % 010.4f|\n", -3.3399999);
//	printf("og: % 010.4f|\n", -3.3399999);
//
//	ft_printf("my: % 010.4f|\n", 3.3399999);
//	printf("og: % 010.4f|\n", 3.3399999);
//
//	ft_printf("my: % 10.4f|\n", 3.3399999);
//	printf("og: % 10.4f|\n", 3.3399999);
//
//	ft_printf("my: %#.f|\n", 999999.99);
//	printf("og: %#.f|\n", 999999.99);
//
//
//	ft_printf("\n\nRIGHT ALIGN \n\n");
//
//	ft_printf("my: %-#.f|\n", 999999.99);
//	printf("og: %-#.f|\n", 999999.99);
//
//	ft_printf("my: %.2f|\n", 9.9999999);
//	printf("og: %.2f|\n", 9.9999999);
//
//	ft_printf("my: %.f|\n", 9.9999999);
//	printf("og: %.f|\n", 9.9999999);
//
//	ft_printf("my: %-.4f|\n", 3.3399999);
//	printf("og: %-.4f|\n", 3.3399999);
//
//	ft_printf("my: %-+010.4f|\n", 3.3399999);
//	printf("og: %-+010.4f|\n", 3.3399999);
//
//	ft_printf("my: %-+10.4f|\n", 3.3399999);
//	printf("og: %-+10.4f|\n", 3.3399999);
//
//	ft_printf("my: %-10.4f|\n", -3.3399999);
//	printf("og: %-10.4f|\n", -3.3399999);
//
//	ft_printf("my: %-010.4f|\n", -3.3399999);
//	printf("og: %-010.4f|\n", -3.3399999);
//
//	ft_printf("my: %-010.4f|\n", 3.3399999);
//	printf("og: %-010.4f|\n", 3.3399999);
	// ft_printf("my: %-010.4f|\n", 3.3399999);
	// printf("og: %-010.4f|\n", 3.3399999);
}
int main()
{

float_checker();
//	test %-7C %007d%-10.2ls!!, 0xd777, 0x45, L"„Äª
	return (0);
}
