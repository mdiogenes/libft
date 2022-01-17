#include "libft.h"

	/*This function is exactly the same as ft_strmap except that when we run
	 * our given function f on the character we also pass to f the specific
	 * index of our character in the given string. Review ft_strmap in order
	 * to understand how this function works.*/

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
