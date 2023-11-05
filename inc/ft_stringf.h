#ifndef FT_STRINGF_H
# define FT_STRINGF_H

# include "conversion.h"
# include "error.h"
# include "get_next_line.h"
# include "memory.h"
# include "string.h"
# include <stdarg.h>
# include <unistd.h>

// prototype

char	*ft_stringf(const char *str, ...);
char	*sort_S(char *val, char *str, size_t i);

#endif