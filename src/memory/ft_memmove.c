#include "../../inc/memory.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (!dest || !src)
		return (NULL);
	if (len == 0 || (!s && !d) || s == d)
		return (d);
	if (d < s)
	{
		ft_memcpy(d, s, len);
	}
	else
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
