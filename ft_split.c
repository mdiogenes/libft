
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*s2;
	char	*s1;
	char	**dst;
	int	lens2;
	int	lens1;
		
	lens1 = ft_strlen(s);
	s1 = (char *)malloc((sizeof int) * lens1);
	s2 = (char *)malloc((sizeof int) * lens1);
	dst =(char *)malloc(sizeof *);
	if (!s1 || !s2 || !dst)
		return (0);
	s2 = ft_strchr(s, (int *)c);
	lens2 = ft_strlen(s2);
	dst[1] = ft_strcpy(dst[1], s2);
	//el strcopy no se si copia el \0
	dst[1][lens2 + 1] = '\0'; 
	lens1 = lens1 - lens2 ;
	dst[0] = s1;
	dst[0][lens1 + 1] = '\0';
	free (s2)
	return (dst);
}
