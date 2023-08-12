#include "../../inc/error.h"

void	ft_exit(char *str)
{
	if (str)
		ft_printf("%s\n", str);
	exit(EXIT_FAILURE);
}
