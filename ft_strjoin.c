
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;
	unsigned int	sizes1;
	unsigned int	sizes2;
	int		lendst;

	sizes1 = ft_strlen((char *)s1);
	sizes2 = ft_strlen((char *)s2);
	dst = (char *)malloc(sizeof (const char)*(sizes1 + sizes2));
	if (dst == 0)
		return(0);
	lendst = ft_strlcpy(dst, s1, (sizes1 + sizes2));
	lendst = ft_strlcat(dst, s2, (sizes1 + sizes2));
	return (dst);	
}
