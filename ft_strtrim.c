
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int	c;
	int	len;

	if (!s1 || !set)
		return (0);
	c = (int *) *set;
	len = ft_strlen(s1);
	dst = (char *) malloc (sizeof char * (len + 1);
	if (!dst)
		return (0);
	ft_strlcpy(dst, s1, len);

	while ((*set != '\0') && ( ft_strchr(dst, c)))
	{
		dst ++;
	}
	while ((len > 0) && (ft_strchr(dst[len], c)))
	{
		len --;
	}
	dst[len + 1] = '\0';
}
