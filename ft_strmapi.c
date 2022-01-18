#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	//reservem lespai de la cadena a tornar amb el +1 pel \0
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	//control errors malloc
	if (str == 0)
		return (0);
	//per cada caracter del string que ens passen i apliquem la funcio passantli el seu index
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
