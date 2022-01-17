
#include "libft.h"
char *ft_substr(const char  *s, unsigned int start, size_t len)
{
	char		*dst; 
	unsigned int	lens;
	
	dst = (char *)&start;
	dst = (char *)malloc(sizeof(const char) * (len));
	if (dst == 0)
		return (0);
	lens = ft_strlcpy(dst, s, len);
	return (dst);
}
