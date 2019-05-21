#include "ft_printf.h"
#include <math.h>
#include <limits.h>
void float_checker()
{
	printf("og: %015f\n", -2.0f);
	ft_printf("my: %015f\n", -2.0f);
	printf("FLOAT_CHECKER\n");
	int	ret1 = printf("%f", 35.1234);
	printf("\n");
	int	ret2 = ft_printf("%f", 35.1234);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%018.7f", -6.1234);
	printf("\n");
	ret2 = ft_printf("%018.7f", -6.1234);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%+18.7f", -351.234);
	printf("\n");
	ret2 = ft_printf("%+18.7f", -351.234);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%9.15f", 890234.f);
	printf("\n");
	ret2 = ft_printf("%9.15f", 890234.f);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%-12.56f", -23.9);
	printf("\n");
	ret2 = ft_printf("%-12.56f", -23.9);
	printf("\nor: %d\nmy: %d\n\n", ret1 ,ret2);

	ret1 = printf("%07.f", -23.74);
	printf("\n");
	ret2 = ft_printf("%07.f", -23.74);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%016.23f", 323.4);
	printf("\n");
	ret2 = ft_printf("%016.23f", 323.4);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%023f", -3694.2);
	printf("\n");
	ret2 = ft_printf("%023f", -3694.2);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%f", 35.1234);
	printf("\n");
	ret2 = ft_printf("%f", 35.1234);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);

	ret1 = printf("%56.28f", -1.000000);
	printf("\n");
	ret2 = ft_printf("%56.28f", -1.000000);
	printf("\nor: %d\nmy: %d\n\n",ret1, ret2);

	ret1 = printf("%024f", 345.123490650);
	printf("\n");
	ret2 = ft_printf("%024f", 345.123490650);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
	printf("%56.6f",922.0009555);
	printf("\n");
	//-9223372036854775808
	ft_printf("%56.6f", 922.0009555);
	printf("\nor: %d\nmy: %d\n\n", ret1, ret2);
	ft_printf("my: %f|\n", 1.00);
	printf("og: %f|\n", 1.00);
	ft_printf("my: %f|\n", 32.23);
	printf("og: %f|\n", 32.23);
	ft_printf("my: %.5f|\n", 122.358);
	printf("og: %.5f|\n", 122.358);
	ft_printf("my: %f|\n", -52.9);
	printf("og: %f|\n", -52.9);
	ft_printf("my: %f|\n", -9.88);
	printf("og: %f|\n", -9.88);
	ft_printf("my: %f|\n", 78.221);
	printf("og: %f|\n", 78.221);
	ft_printf("my: %.0lf|\n", 99999999.1213);
	printf("og: %.0lf|\n", 99999999.1213);
	ft_printf("my: %f|\n", 0.1223);
	printf("og: %f|\n", 0.1223);
	ft_printf("my: %3.f|\n", 42.123312);
	printf("og: %3.f|\n", 42.123312);
	ft_printf("my: %f|\n", 10.01010101);
	printf("og: %f|\n", 10.01010101);
	ft_printf("my: %f|\n", 0.0000);
	printf("og: %f|\n", 0.0000);

	double ff = 89.999;
	printf("\nPRECISION\n\n");
	ft_printf("my: %.f|\n", ff);
	printf("og: %.f|\n", ff);
	ft_printf("my: %.2f|\n", 189.999);
	printf("og: %.2f|\n", 189.999);
	ft_printf("my: %.2f|\n", 9.9999999);
	printf("og: %.2f|\n", 9.9999999);
	ft_printf("my: %.f|\n", 9.9999999);
	printf("og: %.f|\n", 9.9999999);

	ft_printf("my: %.f|\n", 999999.99);
	printf("og: %.f|\n", 999999.99);

	ft_printf("my: %5.1f|\n", 999999.99);
	printf("og: %5.1f|\n", 999999.99);

	ft_printf("my: %.2f|\n", 999999.99);
	printf("og: %.2f|\n", 999999.99);

	ft_printf("\n\nMIXED\n\n");


	ft_printf("my: %.2f|\n", 9.9999999);
	printf("og: %.2f|\n", 9.9999999);

	ft_printf("my: %.f|\n", 9.9999999);
	printf("og: %.f|\n", 9.9999999);

	ft_printf("my: %.4f|\n", 3.3399999);
	printf("og: %.4f|\n", 3.3399999);

	ft_printf("my: %+010.4f|\n", 3.3399999);
	printf("og: %+010.4f|\n", 3.3399999);

	ft_printf("my: %+10.4f|\n", 3.3399999);
	printf("og: %+10.4f|\n", 3.3399999);

	ft_printf("my: %10.4f|\n", -3.3399999);
	printf("og: %10.4f|\n", -3.3399999);

	ft_printf("my: % 010.4f|\n", -3.3399999);
	printf("og: % 010.4f|\n", -3.3399999);

	ft_printf("my: % 010.4f|\n", 3.3399999);
	printf("og: % 010.4f|\n", 3.3399999);

	ft_printf("my: % 10.4f|\n", 3.3399999);
	printf("og: % 10.4f|\n", 3.3399999);

	ft_printf("my: %#.f|\n", 999999.99);
	printf("og: %#.f|\n", 999999.99);


	ft_printf("\n\nRIGHT ALIGN \n\n");

	ft_printf("my: %-#.f|\n", 999999.99);
	printf("og: %-#.f|\n", 999999.99);

	ft_printf("my: %.2f|\n", 9.9999999);
	printf("og: %.2f|\n", 9.9999999);

	ft_printf("my: %.f|\n", 9.9999999);
	printf("og: %.f|\n", 9.9999999);

	ft_printf("my: %-.4f|\n", 3.3399999);
	printf("og: %-.4f|\n", 3.3399999);

	ft_printf("my: %-+010.4f|\n", 3.3399999);
	printf("og: %-+010.4f|\n", 3.3399999);

	ft_printf("my: %-+10.4f|\n", 3.3399999);
	printf("og: %-+10.4f|\n", 3.3399999);

	ft_printf("my: %-10.4f|\n", -3.3399999);
	printf("og: %-10.4f|\n", -3.3399999);

	ft_printf("my: %-010.4f|\n", -3.3399999);
	printf("og: %-010.4f|\n", -3.3399999);

	ft_printf("my: %-010.4f|\n", 3.3399999);
	printf("og: %-010.4f|\n", 3.3399999);
	 ft_printf("my: %-010.4f|\n", 3.3399999);
	 printf("og: %-010.4f|\n", 3.3399999);
}
int main()
{
	//ft_printf("% +u10.5\n", 1231234565432345534);
//	printf(" |%d\n", printf("%+d", 10));
//	printf(" |%d\n", ft_printf("%+d", 10));
//	ft_printf("%.u, %.0u", 0, 0);
//	ft_printf("%8.4u", 424242424);
//	ft_printf("%.d, %.0d", 0, 0);
	float_checker();
//	int a = -22;
//	int b;

//	double d = 1854775808.2352432341234234234;
	//char *p = "H";

//	a = ft_printf("%.6lf\n", d);
//
//	b = printf("%.6lf\n", d);



	int i = 0;


//	printf("% Zoooo\n");
//	ft_printf("% Zoooo\n");
//	a = ft_printf("%");
//	a = printf("%");
//	a = ft_printf("%");
//	a = ft_printf("%");
//	a = ft_printf("%");
//	a = ft_printf("%");
//
//	a = ft_printf("%");
//	a = ft_printf("%");
//	a = ft_printf("%");
//	b = printf("%%");
//
//	a = ft_printf("!%4.s\n", "42");
//	b = printf("!%4.s\n", "42");
//
//	printf("%d %d\n", a, b);
//
//	ft_printf("%D\n", 4294967296);
//	printf("%D\n", 4294967296);
//
//	a = ft_printf("%10.5s|\n", "hello w");
//	b = printf("%10.5s|\n", "hello w");
//
//	printf("%d %d\n", a,b);


	ft_printf("%# 10.0f|\n", 0.0, i++);
	printf("%# 10.0f|\n", 0.0);

	ft_printf("%#10.0f|\n", 0.0, i++);
	printf("%#10.0f|\n", 0.0);

	ft_printf("%d)my: %0 20f|\n", -52.9, i++);
	printf("og: %0 20f|\n", -52.9);

	ft_printf("%d)my: %f|\n", -9.88, i++);
	printf("og: %f|\n", -9.88);

	ft_printf("%d)my: %.f|\n", 999999.99, i++);
	printf("og: %.f|\n\n", 999999.99);

	ft_printf("%d)my: %.f|\n", 89.99, i++);
	printf("og: %.f|\n\n", 89.99);

	ft_printf("%d)my: %3.f|\n", 42.123312, i++);
	printf("og: %3.f|\n\n", 42.123312);

	ft_printf("%d)my: %f|\n", 1.00, i++);
	printf("og: %f|\n\n", 1.00);

	ft_printf("%d)my: %f|\n", 32.23, i++);
	printf("og: %f|\n\n", 32.23);

	ft_printf("%d)my: %.5f|\n", 122.358, i++);
	printf("og: %.5f|\n\n", 122.358);


	ft_printf("%d)my: %f|\n", 78.221, i++);
	printf("og: %f|\n\n", 78.221);

	ft_printf("%d)my: %.0lf|\n", 99999999.1213, i++);
	printf("og: %.0lf|\n\n", 99999999.1213);

	ft_printf("%d)my: %f|\n", 0.1223, i++);
	printf("og: %f|\n\n", 0.1223);

	ft_printf("%d)my: %f|\n", 10.01010101, i++);
	printf("og: %f|\n\n", 10.01010101);

	ft_printf("%d)my: %f|\n", 0.0000, i++);
	printf("og: %f|\n\n", 0.0000);

	ft_printf("%d)my: %.2f|\n", 9.9999999, i++);
	printf("og: %.2f|\n\n", 9.9999999);

	ft_printf("%d)my: %.f|\n", 9.9999999, i++);
	printf("og: %.f|\n\n", 9.9999999);

	//printf("%jd\n", 1234567);
	//ft_printf("%jd\n", 1234567);
//

//
	printf(" |%d\n", printf("%-18.2s", NULL));
	printf(" |%d\n", ft_printf("%-18.2s", NULL));

	ft_printf("\n");
	ft_printf("%%\n");
	ft_printf("%d\n", 42);
	ft_printf("%d%d\n", 42, 41);
	ft_printf("%d%d%d\n", 42, 43, 44);
	ft_printf("%ld\n", 2147483647);
	ft_printf("%lld\n", 9223372036854775807);
	ft_printf("%x\n", 505);
	ft_printf("%X\n", 505);
	ft_printf("%p\n", &ft_printf);
	ft_printf("%20.15d\n", 54321);
	ft_printf("%-10d\n", 3);
	ft_printf("% d\n", 3);
	ft_printf("%+d\n", 3);
	ft_printf("%010d\n", 1);
	ft_printf("%hhd\n", 0);
	ft_printf("%jd\n", 9223372036854775807);
	ft_printf("%zd\n", 4294967295);
	ft_printf("%\n");
	ft_printf("%U\n", 4294967295);
	ft_printf("%u\n", 4294967295);
	ft_printf("%o\n", 40);
	ft_printf("%%#08x\n", 42);
	ft_printf("%x\n", 1000);
	ft_printf("%#X\n", 1000);
	ft_printf("%s\n", NULL);
	ft_printf("%S\n", L"ݗݜशব");
	ft_printf("%s%s\n", "test", "test");
	ft_printf("%s%s%s\n", "test", "test", "test");
	ft_printf("%C\n", 15000);

	printf(" |%d\n", printf("%#.o, %#.0o", 0, 0));
	printf(" |%d\n", ft_printf("%#.o, %#.0o", 0, 0));

	return(0);
}
