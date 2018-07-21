#ifndef FT_SHOW_TAB
#define FT_SHOW_TAB

#include <stdlib.h>

typedef		struct	s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}					t_stock_par;

void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_putstr2d(char **tab);
void	ft_show_tab(t_stock_par *par);

#endif
