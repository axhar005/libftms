#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "write_fd.h"

//prototype

int	ft_putnbr_base(unsigned int nbr, char c);
int	ft_printf(const char *str, ...);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putpointer(unsigned long long n);

#endif