
#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		//igual que strmapi pero passem la direccio en comptes del punter
		f(i, s + i);
		i++;
	}
}
