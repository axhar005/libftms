#include "../../inc/memory.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	s = src;
	d = dest;
	if (!dest || !src)
		return (dest);
	if (n == 0 || (!s && !d) || s == d)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
