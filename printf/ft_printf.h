#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h> // del


typedef enum e_flag
{
	zero = 0,
	sharp = 1,
	minus = 2,
	plus = 3,
	space = 4,
	prec = 5,
	last = 6
}			t_flag;


typedef struct		s_var
{
	int flags[last];
}					t_pf;

#endif
