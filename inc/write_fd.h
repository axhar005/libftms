#ifndef WRITE_FD_H
# define WRITE_FD_H

# include <unistd.h>

//prototype

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);

#endif