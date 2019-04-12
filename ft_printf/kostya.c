
#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>


void decimal_checker()
{
	printf("\nDECIMAL:\n");
	printf("\n<|######--LEFT   ALIGN--######|>\n");

	ft_printf("my: %d|\n", 0);
	printf("og: %d|\n", 0);
	ft_printf("my: %d|\n", -7);
	printf("og: %d|\n", -7);
	ft_printf("my: %d|\n", 1560133635);
	printf("og: %d|\n", 1560133635);
	ft_printf("my: %d|\n", -2035065302);
	printf("og: %d|\n", -2035065302);

	// PLUS
	printf("\n<|##########+++#################|>\n");

	ft_printf("my: %+14d|\n", 0);
	printf("og: %+14d|\n", 0);
	ft_printf("my: %+1d|\n", 12);
	printf("og: %+1d|\n", 12);
	ft_printf("my: %+14d|\n", -7);
	printf("og: %+14d|\n", -7);
	ft_printf("my: %14d|\n", -8);
	printf("og: %14d|\n", -8);
	ft_printf("my: %+14d|\n", 1560133635);
	printf("og: %+14d|\n", 1560133635);
	ft_printf("my: %+14d|\n", -2035065302);
	printf("og: %+14d|\n", -2035065302);

	// SPACE
	printf("\n<|###########   ##############|>\n");

	ft_printf("my: %05d|\n", 0);
	printf("og: %05d|\n", 0);
	ft_printf("my: %05d|\n", -7);
	printf("og: %05d|\n", -7);
	ft_printf("my: %012d|\n", 120);
	printf("og: %012d|\n", 120);
	ft_printf("my: %12d|\n", 31);
	printf("og: %12d|\n", 31);
	ft_printf("my: %12d|\n", -32);
	printf("og: %12d|\n", -32);
	ft_printf("my: %05d|\n", 1560133635);
	printf("og: %05d|\n", 1560133635);
	ft_printf("my: %05d|\n", -2035065302);
	printf("og: %05d|\n", -2035065302);

	printf("\n<|########--PRECISION--#######|>\n");

	ft_printf("my: %+.9d|\n", 7);
	printf("og: %+.9d|\n", 7);
	ft_printf("my: %+.9d|\n", -7);
	printf("og: %+.9d|\n", -7);
	ft_printf("my: %23.15d|\n", 722);
	printf("og: %23.15d|\n", 722);
	;
	ft_printf("my: %15.23d|\n", 222);
	printf("og: %15.23d|\n", 222);
	;
	ft_printf("my: %+.5d|\n", 1);
	printf("og: %+.5d|\n", 1);
	ft_printf("my: %+.1d|\n", 5);
	printf("og: %+.1d|\n", 5);
	ft_printf("my: %.d|\n", 6);
	printf("og: %.d|\n", 6);

	printf("\n<|######--RIGHT  ALIGN--######|>\n");
	// RIGHT ALIGN
	ft_printf("my: %+-5d|\n", 0);
	printf("og: %+-5d|\n", 0);
	ft_printf("my: %+-5d|\n", -7);
	printf("og: %+-5d|\n", -7);
	ft_printf("my: %+-5d|\n", 1560133635);
	printf("og: %+-5d|\n", 1560133635);
	ft_printf("my: %+-5d|\n", -2035065302);
	printf("og: %+-5d|\n", -2035065302);

	printf("\n<|###########-0###############|>\n");

	ft_printf("my: %-05d|\n", 0);
	printf("og: %-05d|\n", 0);
	ft_printf("my: %-05d|\n", -7);
	printf("og: %-05d|\n", -7);
	ft_printf("my: %-012d|\n", 120);
	printf("og: %-012d|\n", 120);
	ft_printf("my: %-012d|\n", -120);
	printf("og: %-012d|\n", -120);
	ft_printf("my: %-05d|\n", 1560133635);
	printf("og: %-05d|\n", 1560133635);
	ft_printf("my: %-05d|\n", -2035065302);
	printf("og: %-05d|\n", -2035065302);

	printf("\n<|########--PRECISION--#######|>\n");

	ft_printf("my: %-23.15d|\n", 222);
	printf("og: %-23.15d|\n", 222);
	;
	ft_printf("my: %-15.23d|\n", 222);
	printf("og: %-15.23d|\n", 222);
	;
	ft_printf("my: %-+.9d|\n", 7);
	printf("og: %-+.9d|\n", 7);
	ft_printf("my: %-+.9d|\n", -7);
	printf("og: %-+.9d|\n", -7);
	ft_printf("my: %-.15d|\n", 722);
	printf("og: %-.15d|\n", 722);
	;
	ft_printf("my: %-+.5d|\n", 1);
	printf("og: %-+.5d|\n", 1);
	ft_printf("my: %-+5.5d|\n", 1);
	printf("og: %-+5.5d|\n", 1);
	ft_printf("my: %-+.1d|\n", 5);
	printf("og: %-+.1d|\n", 5);
	ft_printf("my: %-.d|\n", 6);
	printf("og: %-.d|\n", 6);

	printf("\n<|############################|>\n");
}

void unsigned_decimal_checker()
{
	printf("\n<|##########unsigned_dec############|>\n");

	ft_printf("my: %u|\n", 0);
	printf("og: %u|\n", 0);
	ft_printf("my: %u|\n", -7);
	printf("og: %u|\n", -7);
	ft_printf("my: %u|\n", 1560133635);
	printf("og: %u|\n", 1560133635);
	ft_printf("my: %u|\n", -2035065302);
	printf("og: %u|\n", -2035065302);

	// PLUS
	printf("\n<|##############+++###########|>\n");

	ft_printf("my: %+14u|\n", 0);
	printf("og: %+14u|\n", 0);
	ft_printf("my: %+14u|\n", 12);
	printf("og: %+14u|\n", 12);
	ft_printf("my: %+14u|\n", -7);
	printf("og: %+14u|\n", -7);
	ft_printf("my: %+14u|\n", 1560133635);
	printf("og: %+14u|\n", 1560133635);
	ft_printf("my: %+14u|\n", -2035065302);
	printf("og: %+14u|\n", -2035065302);
	ft_printf("my: %23.15u|\n", 722);
	printf("og: %23.15u|\n", 722);
	;
	ft_printf("my: %15.23u|\n", 222);
	printf("og: %15.23u|\n", 222);
	;

	// SPACE
	printf("\n<|############   #############|>\n");

	ft_printf("my: %05u|\n", 0);
	printf("og: %05u|\n", 0);
	ft_printf("my: %05u|\n", -7);
	printf("og: %05u|\n", -7);
	ft_printf("my: %012u|\n", 120);
	printf("og: %012u|\n", 120);
	ft_printf("my: %05u|\n", 1560133635);
	printf("og: %05u|\n", 1560133635);
	ft_printf("my: %05u|\n", -2035065302);
	printf("og: %05u|\n", -2035065302);

	printf("\n<|######--RIGHT  ALIGN--######|>\n");
	// RIGHT ALIGN
	ft_printf("my: %+-5u|\n", 0);
	printf("og: %+-5u|\n", 0);
	ft_printf("my: %+-5u|\n", -7);
	printf("og: %+-5u|\n", -7);
	ft_printf("my: %+-5u|\n", 1560133635);
	printf("og: %+-5u|\n", 1560133635);
	ft_printf("my: %+-5u|\n", -2035065302);
	printf("og: %+-5u|\n", -2035065302);

	printf("\n<|###########----##############|>\n");

	ft_printf("my: %-23.15u|\n", 722);
	printf("og: %-23.15u|\n", 722);
	;
	ft_printf("my: %-15.23u|\n", 222);
	printf("og: %-15.23u|\n", 222);
	;
	ft_printf("my: %-05u|\n", 0);
	printf("og: %-05u|\n", 0);
	ft_printf("my: %-05u|\n", -7);
	printf("og: %-05u|\n", -7);
	ft_printf("my: %-012u|\n", 120);
	printf("og: %-012u|\n", 120);
	ft_printf("my: %-012u|\n", -120);
	printf("og: %-012u|\n", -120);
	ft_printf("my: %-05u|\n", 1560133635);
	printf("og: %-05u|\n", 1560133635);
	ft_printf("my: %-05u|\n", -2035065302);
	printf("og: %-05u|\n", -2035065302);

	printf("\n<|########--PRECISION--#######|>\n");

	ft_printf("my: %-+.9u|\n", 7);
	printf("og: %-+.9u|\n", 7);
	ft_printf("my: %-+.9u|\n", -7);
	printf("og: %-+.9u|\n", -7);
	ft_printf("my: %-.15u|\n", 722);
	printf("og: %-.15u|\n", 722);
	;
	ft_printf("my: %-+.5u|\n", 7);
	printf("og: %-+.5u|\n", 7);
	ft_printf("my: %-+.1u|\n", 7);
	printf("og: %-+.1u|\n", 7);
	ft_printf("my: %-+5.5u|\n", 321);
	printf("og: %-+5.5u|\n", 321);
	ft_printf("my: %-.u|\n", 7);
	printf("og: %-.u|\n", 7);
	ft_printf("my: %-+.0u|\n", 0);
	printf("og: %-+.0u|\n", 0);

	printf("\n<|############################|>\n");
}

void hex_checker()
{
	printf("HEX_CHECKER\n");
	printf("\n<|######--LEFT   ALIGN--######|>\n");

	ft_printf("my: %x|\n", 0);
	printf("og: %x|\n", 0);
	ft_printf("my: %x|\n", -7);
	printf("og: %x|\n", -7);
	ft_printf("my: %x|\n", 1560133635);
	printf("og: %x|\n", 1560133635);
	ft_printf("my: %x|\n", -2035065302);
	printf("og: %x|\n", -2035065302);
	ft_printf("my: %.x|\n", 7);
	printf("og: %.x|\n", 7);

	// PLUS
	printf("\n<|#########+++++################|>\n");

	ft_printf("my: %+15x|\n", 0);
	printf("og: %+15x|\n", 0);
	ft_printf("my: %+14x|\n", 12);
	printf("og: %+14x|\n", 12);
	ft_printf("my: %+14x|\n", -7);
	printf("og: %+14x|\n", -7);
	ft_printf("my: %+14x|\n", 1560133635);
	printf("og: %+14x|\n", 1560133635);
	ft_printf("my: %+14x|\n", -2035065302);
	printf("og: %+14x|\n", -2035065302);

	printf("\n<|#########  #  #############|>\n");

	ft_printf("my: %#13.5lx|\n", 0);
	printf("og: %#13.5lx|\n", 0);
	ft_printf("my: %#+13.10lx|\n", 0);
	printf("og: %#+13.10lx|\n", 0);
	ft_printf("my: %#+16.5lx|\n", 42);
	printf("og: %#+16.5lx|\n", 42);
	;
	ft_printf("my: %#+6.15lx|\n", 42);
	printf("og: %#+6.15lx|\n", 42);
	;
	ft_printf("my: %#+5x|\n", -7);
	printf("og: %#+5x|\n", -7);
	ft_printf("my: %+5x|\n", 1560133635);
	printf("og: %+5x|\n", 1560133635);
	ft_printf("my: %+5x|\n", -2035065302);
	printf("og: %+5x|\n", -2035065302);

	printf("\n<|#########   0 ###############|>\n");

	ft_printf("my: %5x|\n", 0);
	printf("og: %5x|\n", 0);
	ft_printf("my: %05x|\n", -7);
	printf("og: %05x|\n", -7);
	ft_printf("my: %012x|\n", 120);
	printf("og: %012x|\n", 120);
	ft_printf("my: %012x|\n", -120);
	printf("og: %012x|\n", -120);
	ft_printf("my: %#05x|\n", 1560133635);
	printf("og: %#05x|\n", 1560133635);
	ft_printf("my: %05x|\n", -2035065302);
	printf("og: %05x|\n", -2035065302);
	ft_printf("my: %10.07x|\n", 123456);
	printf("og: %10.07x|\n", 123456);
	ft_printf("my: %10.05x|\n", 123456);
	printf("og: %10.05x|\n", 123456);

	printf("\n<|######--RIGHT  ALIGN--######|>\n");
	// RIGHT ALIGN
	ft_printf("my: %#-+13.5lx|\n", 0);
	printf("og: %#-+13.5lx|\n", 0);
	ft_printf("my: %#-+16.5lx|\n", 42);
	printf("og: %#-+16.5lx|\n", 42);
	ft_printf("my: %#-+13.5lx|\n", 0);
	printf("og: %#-+13.5lx|\n", 0);
	ft_printf("my: %#-+16.5lx|\n", 42);
	printf("og: %#-+16.5lx|\n", 42);
	;
	ft_printf("my: %#+-5x|\n", -7);
	printf("og: %#+-5x|\n", -7);
	ft_printf("my: %+-5x|\n", 1560133635);
	printf("og: %+-5x|\n", 1560133635);
	ft_printf("my: %+-5x|\n", -2035065302);
	printf("og: %+-5x|\n", -2035065302);
	ft_printf("my: %#-+6.15lx|\n", 42);
	printf("og: %#-+6.15lx|\n", 42);
	;

	ft_printf("my: %-24llx|\n", 331231232132112);
	printf("og: %-24llx|\n", 331231232132112);
	ft_printf("my: %-05x|\n", 0);
	printf("og: %-05x|\n", 0);
	ft_printf("my: %-05x|\n", -7);
	printf("og: %-05x|\n", -7);
	ft_printf("my: %-012x|\n", 120);
	printf("og: %-012x|\n", 120);
	ft_printf("my: %-012x|\n", -120);
	printf("og: %-012x|\n", -120);
	ft_printf("my: %#-05x|\n", 1560133635);
	printf("og: %#-05x|\n", 1560133635);
	ft_printf("my: %-05x|\n", -2035065302);
	printf("og: %-05x|\n", -2035065302);
	ft_printf("my: %-.0x|\n", 0);
	printf("og: %-.0x|\n", 0);

	printf("\n<|############################|>\n");
}

void octal_checker()
{
	printf("OCTAL\n");
	printf("\n<|######--LEFT   ALIGN--######|>\n");

	ft_printf("my: %o|\n", 0);
	printf("og: %o|\n", 0);
	ft_printf("my: %o|\n", -7);
	printf("og: %o|\n", -7);
	ft_printf("my: %o|\n", 1560133635);
	printf("og: %o|\n", 1560133635);
	ft_printf("my: %o|\n", -2035065302);
	printf("og: %o|\n", -2035065302);
	ft_printf("my: %.o|\n", 7);
	printf("og: %.o|\n", 7);

	// PLUS
	printf("\n<|######### ++++++++ ############|>\n");

	ft_printf("my: %+15o|\n", 0);
	printf("og: %+15o|\n", 0);
	ft_printf("my: %+14o|\n", 12);
	printf("og: %+14o|\n", 12);
	ft_printf("my: %+14o|\n", -7);
	printf("og: %+14o|\n", -7);
	ft_printf("my: %+14o|\n", 1560133635);
	printf("og: %+14o|\n", 1560133635);
	ft_printf("my: %+14o|\n", -2035065302);
	printf("og: %+14o|\n", -2035065302);

	printf("\n<|############################|>\n");

	ft_printf("my: %#13.5lo|\n", 0);
	printf("og: %#13.5lo|\n", 0);
	ft_printf("my: %#+13.10lo|\n", 0);
	printf("og: %#+13.10lo|\n", 0);
	ft_printf("my: %#19.5lo|\n", 42);
	printf("og: %#19.5lo|\n", 42);
	ft_printf("my: %#9.15lo|\n", 12);
	printf("og: %#9.15lo|\n", 12);
	ft_printf("my: %#+16.5lo|\n", 342);
	printf("og: %#+16.5lo|\n", 342);
	ft_printf("my: %#+5o|\n", -7);
	printf("og: %#+5o|\n", -7);
	ft_printf("my: %+5o|\n", 1560133635);
	printf("og: %+5o|\n", 1560133635);
	ft_printf("my: %+5o|\n", -2035065302);
	printf("og: %+5o|\n", -2035065302);

	printf("\n<|######## 0 ##############|>\n");

	ft_printf("my: %5o|\n", 0);
	printf("og: %5o|\n", 0);
	ft_printf("my: %05o|\n", -7);
	printf("og: %05o|\n", -7);
	ft_printf("my: %012o|\n", 120);
	printf("og: %012o|\n", 120);
	ft_printf("my: %012o|\n", -120);
	printf("og: %012o|\n", -120);
	ft_printf("my: %#05o|\n", 1560133635);
	printf("og: %#05o|\n", 1560133635);
	ft_printf("my: %05o|\n", -2035065302);
	printf("og: %05o|\n", -2035065302);
	ft_printf("my: %10.07o|\n", 123456);
	printf("og: %10.07o|\n", 123456);
	ft_printf("my: %10.05o|\n", 123456);
	printf("og: %10.05o|\n", 123456);

	printf("\n<|######--RIGHT  ALIGN--######|>\n");
	// RIGHT ALIGN

	ft_printf("my: %#-+13.5lo|\n", 0);
	printf("og: %#-+13.5lo|\n", 0);
	ft_printf("my: %#-+16.5lo|\n", 42);
	printf("og: %#-+16.5lo|\n", 42);
	ft_printf("my: %#-+13.5lo|\n", 0);
	printf("og: %#-+13.5lo|\n", 0);
	ft_printf("my: %#-+16.5lo|\n", 42);
	printf("og: %#-+16.5lo|\n", 42);
	ft_printf("my: %#-19.5lo|\n", 42);
	printf("og: %#-19.5lo|\n", 42);
	ft_printf("my: %#-+16.5lo|\n", 342);
	printf("og: %#+-16.5lo|\n", 342);
	ft_printf("my: %#+-5o|\n", -7);
	printf("og: %#+-5o|\n", -7);
	ft_printf("my: %+-5o|\n", 1560133635);
	printf("og: %+-5o|\n", 1560133635);
	ft_printf("my: %+-5o|\n", -2035065302);
	printf("og: %+-5o|\n", -2035065302);

	ft_printf("my: %-24llo|\n", 331231232132112);
	printf("og: %-24llo|\n", 331231232132112);
	ft_printf("my: %-05o|\n", 0);
	printf("og: %-05o|\n", 0);
	ft_printf("my: %-05o|\n", -7);
	printf("og: %-05o|\n", -7);
	ft_printf("my: %-012o|\n", 120);
	printf("og: %-012o|\n", 120);
	ft_printf("my: %-012o|\n", -120);
	printf("og: %-012o|\n", -120);
	ft_printf("my: %#-05o|\n", 1560133635);
	printf("og: %#-05o|\n", 1560133635);
	ft_printf("my: %-05o|\n", -2035065302);
	printf("og: %-.0o|\n", -2035065302);
	ft_printf("my: %-.0o|\n", 0);
	printf("og: %-.0o|\n", 0);

	printf("\n<|############################|>\n");
}

void char_checker()
{
	printf("CHAR_CHECKER\n");
	ft_printf("my: %c|\n", '1');
	printf("og: %c|\n", '1');
	ft_printf("my: %c|\n", '3');
	printf("og: %c|\n", '3');
	ft_printf("my: %c|\n", 'c');
	printf("og: %c|\n", 'c');
	ft_printf("my: %c|\n", 'A');
	printf("og: %c|\n", 'A');
	ft_printf("my: %.c|\n", '%');
	printf("og: %.c|\n", '%');
	ft_printf("my: %-3.c|\n", 123312);
	printf("og: %-3.c|\n", 123312);
}

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
ret2 = ft_printf("%+18.7f", 351.234);
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

ret1 = printf("%56.28f",-9223372036854775808.000000);
	printf("\n");
ret2 = ft_printf("%56.28f", -9223372036854775808.000000);
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
	// ft_printf("my: %-010.4f|\n", 3.3399999);
	// printf("og: %-010.4f|\n", 3.3399999);
}

void str_checker()
{
	printf("STRING_CHECKER\n");
	char *s = "123456789";
	char *null_str;

	printf("\n<|###########--LEFT ALIGN--###########|>\n");
	ft_printf("my: %s|\n", s);
	printf("og: %s|\n", s);
	ft_printf("my: %5s|\n", s);
	printf("og: %5s|\n", s);
	ft_printf("my: %15s|\n", s);
	printf("og: %15s|\n", s);
	ft_printf("my: %.5s|\n", s);
	printf("og: %.5s|\n", s);
	ft_printf("my: %.32s|\n", s);
	printf("og: %.32s|\n", s);
	ft_printf("my: %6.12s|\n", s);
	printf("og: %6.12s|\n", s);
	ft_printf("my: %12.6s|\n", s);
	printf("og: %12.6s|\n", s);
	ft_printf("my: %0s|\n", s);
	printf("og: %0s|\n", s);
	printf("\n<|###########--RIGHT ALIGN--###########|>\n");
	ft_printf("my: %-s|\n", s);
	printf("og: %-s|\n", s);
	ft_printf("my: %-5s|\n", s);
	printf("og: %-5s|\n", s);
	ft_printf("my: %-15s|\n", s);
	printf("og: %-15s|\n", s);
	ft_printf("my: %-.5s|\n", s);
	printf("og: %-.5s|\n", s);
	ft_printf("my: %-.32s|\n", s);
	printf("og: %-.32s|\n", s);
	ft_printf("my: %-6.12s|\n", s);
	printf("og: %-6.12s|\n", s);
	ft_printf("my: %-12.6s|\n", s);
	printf("og: %-12.6s|\n", s);
	ft_printf("my: %-.0s|\n", s);
	printf("og: %-.0s|\n", s);

	printf("\n<|###########--NULL STR--###########|>\n");
	printf("og: %-s|\n", NULL);
	ft_printf("my: %-s|\n", NULL);
}

void ptr_checker()
{
	printf("PTR_CHECKER\n");
	char *p = "123456789";
	char *null_str;
	long double *a;

	printf("\n<|###########--LEFT ALIGN--###########|>\n");
	ft_printf("my: %p|\n", p);
	printf("og: %p|\n", p);
	ft_printf("my: %5p|\n", p);
	printf("og: %5p|\n", p);
	ft_printf("my: %15p|\n", p);
	printf("og: %15p|\n", p);
	ft_printf("my: %.5p|\n", p);
	printf("og: %.5p|\n", p);
	ft_printf("my: %.32p|\n", p);
	printf("og: %.32p|\n", p);
	ft_printf("my: %6.12p|\n", p);
	printf("og: %6.12p|\n", p);
	ft_printf("my: %12.6p|\n", p);
	printf("og: %12.6p|\n", p);
	ft_printf("my: %0p|\n", p);
	printf("og: %0p|\n", p);
	printf("\n<|###########--RIGHT ALIGN--###########|>\n");
	ft_printf("my: %-p|\n", p);
	printf("og: %-p|\n", p);
	ft_printf("my: %-5p|\n", p);
	printf("og: %-5p|\n", p);
	ft_printf("my: %-15p|\n", p);
	printf("og: %-15p|\n", p);
	ft_printf("my: %-.5p|\n", p);
	printf("og: %-.5p|\n", p);
	ft_printf("my: %-.32p|\n", p);
	printf("og: %-.32p|\n", p);
	ft_printf("my: %-6.12p|\n", p);
	printf("og: %-6.12p|\n", p);
	ft_printf("my: %-12.6p|\n", p);
	printf("og: %-12.6p|\n", p);
	ft_printf("my: %-.0p|\n", p);
	printf("og: %-.0p|\n", p);
	ft_printf("my: %-.0p|\n", 0);
	printf("og: %-.0p|\n", 0);

	printf("\n<|###########--NULL STR--###########|>\n");
	printf("og: %-p|\n", NULL);
	ft_printf("my: %-p|\n", NULL);
}

void extra_check()
{
	printf("EXTRA_CHECK\n");
	ft_printf("%c|\n", 42);
	printf("%c|\n", 42);
	ft_printf("%5.2x|\n", 5427);
	printf("%5.2x|\n", 5427);
	int n = ft_printf("o: %#.o, %#.0o|\n", 0, 0);
	int m = printf("o: %#.o, %#.0o|\n", 0, 0);
	printf("n: %d\n", n);
	printf("m: %d\n", m);
	n = ft_printf("o5: %#5.o, %#5.0o|\n", 0, 0);
	m = printf("o5: %#5.o, %#5.0o|\n", 0, 0);
	n = ft_printf("o5: %5.o, %5.0o|\n", 0, 0);
	m = printf("o5: %5.o, %5.0o|\n", 0, 0);
	printf("n: %d\n", n);
	printf("m: %d\n", m);
	ft_printf("x with .0: %#5.x, %#5.0x|\n", 0, 0);
	printf("x with .0: %#5.x, %#5.0x|\n", 0, 0);
	ft_printf("%#6o\n", 2500);
	printf("%#6o\n", 2500);
	ft_printf("%6o\n", 2500);
	printf("%6o\n", 2500);
	ft_printf("%-5.10o\n", 2500);
	printf("%-5.10o\n", 2500);
	ft_printf("%4.s|\n", "42");
	printf("%4.s|\n", "42");
	ft_printf("%4.0s|\n", "42");
	printf("%4.0s!\n", "42");
	printf("\n");
	ft_printf("%5.2s|\n", "");
	printf("%5.2s|\n", "");
	ft_printf("%s|\n", "");
	printf("%s|\n", "");
	ft_printf("%5.19s|\n", "");
	printf("%5.19s|\n", "");
	ft_printf("%15.4s|\n", "42");
	printf("%15.4s|\n", "42");
	ft_printf("%5.2s is a string|\n", "this");
	printf("%5.2s is a string|\n", "this");
	ft_printf("%-5.2s is a string|\n", "");
	printf("%-5.2s is a string|\n", "");
	ft_printf("%0+5d\n", 42);
	printf("%0+5d\n", 42);
	ft_printf("%0+5d\n", -42);
	printf("%0+5d\n", -42);
	ft_printf("% 10.5d\n", 4242);
	printf("% 10.5d\n", 4242);
	ft_printf("%03.2d\n", -1);
	printf("%03.2d\n", -1);
	ft_printf("@moulitest: %.10d|\n", -42);
	printf("@moulitest: %.10d|\n", -42);
	ft_printf("@moulitest: %.d %.0d|\n", 0, 0);
	printf("@moulitest: %.d %.0d|\n", 0, 0);
	ft_printf("@moulitest: %5.d %5.0d|\n", 0, 0);
	printf("@moulitest: %5.d %5.0d|\n", 0, 0);
	ft_printf("%03.2d|\n", 0);
	printf("%03.2d|\n", 0);

	int t = ft_printf("%lld\n", -9223372036854775808);
	int s = printf("%lld\n", -9223372036854775808);

	ft_printf("%d\n", t);
	ft_printf("%d\n", s);
	unsigned short sh = 65535;
	ft_printf("%ll0|\n", USHRT_MAX);
	printf("%ll0|\n", USHRT_MAX);
	ft_printf("%O|\n", LONG_MIN);
	printf("%O|\n", LONG_MIN);
	ft_printf("{%05.c}\n", 0);
	printf("{%05.c}\n", 0);
	ft_printf("my %-#o|\n", 0);
	printf("og %-#o|\n", 0);
	ft_printf("my %#5o|\n", 0);
	printf("og %#5o|\n", 0);
	ft_printf("my %#14o|\n", 0);
	printf("og %#14o|\n", 0);
	ft_printf("\n%#o|\n", 0);
	printf("%#o|\n", 0);
	ft_printf("my %15.4d|\n", 424242);
	printf("og %15.4d|\n", 424242);
	ft_printf("my %15.4o|\n", 424242);
	printf("og %15.4o|\n", 424242);
	ft_printf("my %15.4u|\n", 424242);
	printf("og %15.4u|\n", 424242);
	ft_printf("my %15.4x|\n", 42);
	printf("og %15.4x|\n", 42);
	ft_printf("@moulitest: %5.d %5.0d|\n", 0, 0);
	printf("@moulitest: %5.d %5.0d|\n", 0, 0);
	ft_printf("@moulitest: %5.d %5.0d|\n", 1, 1);
	printf("@moulitest: %5.d %5.0d|\n", 1, 1);
	//  ft_printf("%");
	ft_printf("{% 03d}\n", 0);
	printf("{% 03d}\n", 0);
	ft_printf("{%03c}\n", 0);
	int cve = printf("{%03c}\n", 0);
	printf("%d\n", cve);
	ft_printf("{%05s}\n", "abc");
	printf("{%05s}\n", "abc");
	ft_printf("{%05.s}\n", "abc");
	printf("{%05.s}\n", "abc");
	ft_printf("{%05.2s}\n", "abc");
	printf("{%05.2s}\n", "abc");
	ft_printf("{%05.5s}\n", "abc");
	printf("{%05.5s}\n", "abc");
	printf("%");
	float fl = 12379.9;
	ft_printf("%.15f|\n", fl);
	printf("%.15f|\n", fl);
	ft_printf("%.8f|\n", fl);
	printf("%.8f|\n", fl);
	ft_printf("%.9f|\n", fl);
	printf("%.9f|\n", fl);
	// ft_printf("%.9f|\n", 12379.900390625000);
	// printf("%.9f|\n", 12379.900390625000);
	ft_printf("%.7lf|\n", 12379.9003906250000001L);
	printf("%.7lf|\n", 12379.9003906250000001);
	ft_printf("%.1f|\n", 12379.250000001);
	printf("%.1f|\n", 12379.250000001);
}
