#include "../../inc/memory.h"

/// @brief allo memory with mallloc and bzero to set all values 
/// @param count is how many value
/// @param size is size of value
/// @return a pointer with new zero value
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	if (ptr)
	{
		ft_bzero(ptr, count * size);
	}
	return (ptr);
}
