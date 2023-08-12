#include "../../inc/string.h"

/// @brief write a string on a fd
/// @param s is the string
/// @param fd is the file descriptor
/// @return the write number
int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
