#include "../../inc/comparison.h"

/// @brief Check if it's a letter or number
/// @param c is a char
/// @return 1 = true 0 = false
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
	{
		return (1);
	}
	return (0);
}
