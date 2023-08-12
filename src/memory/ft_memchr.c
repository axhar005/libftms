#include "../../inc/memory.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((char *)(p + i));
		i++;
	}
	return (NULL);
}
