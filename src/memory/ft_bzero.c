#include "../../inc/memory.h"

/// @brief set all values in a pointer to zero
/// @param s is a pointer
/// @param n is the length of pointer
void	ft_bzero(void *s, size_t n)
{
	if (!s)
		return ;
	ft_memset(s, 0, n);
}
