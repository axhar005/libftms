
#include "inc/libft.h"
// #include "../libmms/libmms.h"
int main(void)
{
    mms_set_alloc_fn(ft_calloc);
    char *test = ft_stringf("test %s%d", "asdasd", 35);
    printf("test %s", test);
    free(test);
    mms_kill("End", true, 1);
    return(0);
}