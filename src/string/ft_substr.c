#include "../../inc/string.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	str_len;

	str_len = ft_strlen(str);
	if (!str)
		return (NULL);
	if (start > str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = (str_len - start);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, str + start, len);
	new[len] = '\0';
	return (new);
}
