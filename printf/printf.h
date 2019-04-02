#ifndef PRINTF_H
# define PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h> // del


typedef struct		s_var
{
	int fl_sharp;
	int fl_zero;
	int fl_minus;
	int fl_plus;
	int fl_space;
	int precision;
	int width;
}					t_pf;

#endif
