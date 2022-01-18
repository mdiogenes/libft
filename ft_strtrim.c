
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int	len;
	int	x;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	dst = (char *) malloc (sizeof char * (len + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s1, len);
	i = 0
	while ((*(set + i) != '\0') && ( ft_strchr(&(dst + i), ((int *) *(set + i)))))
		i ++;
	i = 0;
	while ((len > 0) && (ft_strchr(&(dst + len), ((int *) *(set + i)))))
	{
		len --;
		i ++,
	}
	dst[len + 1] = '\0';
	return (dst);
}
