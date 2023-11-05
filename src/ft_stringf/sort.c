#include "../../../libmms/libmms.h"
#include "../../inc/ft_stringf.h"

char	*sort_cs(char *val, char *str, size_t i)
{
	char	*new;

	if (!str)
		return (NULL);
	new = mms_alloc(i + 1, sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, str, i);
	new = ft_gnl_strjoin(new, val);
	if (ft_strlen(&str[i + 2]) > 0)
		new = ft_gnl_strjoin(new, &str[i + 2]);
	mms_free(val);
	return (new);
}
