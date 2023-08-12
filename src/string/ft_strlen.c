#include "../../inc/string.h"

/// @brief count the number of char in a string 
/// @param str the tring
/// @return the string length
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}
