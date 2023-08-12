#include "../../inc/string.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	n;

	if (!str)
		return (NULL);
	i = 0;
	n = ft_strlen(str);
	while (i <= n)
	{
		if (((char *)str)[i] == (unsigned char)c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
