#include "../../inc/write_fd.h"

/// @brief write a string endling with newline
/// @param s is the string to write
/// @param fd is the file descriptor
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
