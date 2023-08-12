#include "../../inc/write_fd.h"

/// @brief write a char on a fd
/// @param c is the char
/// @param fd is the file descriptor
/// @return the write length
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
