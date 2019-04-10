#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h> // del


typedef enum e_flag
{
	zero = 0,
	sharp = 1,
	minus = 2,
	plus = 3,
	space = 4,
	prec = 5,
	width = 6,
	l = 7,
	ll = 8,
	h = 9,
	hh = 10,
	L = 11

}			t_flag;


typedef struct		s_var
{
	int		flags[13];
	int		size;
	char	convers;
}					t_pf;

int		parse(char *str, t_pf *pf);
void	conv_c(t_pf *pf, va_list ap);
void	conv_s(t_pf *pf, va_list ap);
void	conv_di(t_pf *pf, va_list ap);
#endif
