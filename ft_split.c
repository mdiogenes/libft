
#include "libft.h"

#include "libft.h"

static int	count_strings(const char *str, char c)
{
	int x;
	int found;
	//contem amb quantes strings hem de separar mirant
	x = 0;
	found = 0;
	while (*str)
	{
		if (*str != c && found == 0)
		{
			found = 1;
			x++;
		}
		else if (*str == c)
			found = 0;
		str++;
	}
	return (x);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;
	//contem amb quantes strings hem de separar la string s
	if (!s || !(split = malloc((count_strings(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		//ens afegeix tota la string separada pel delimitador
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = "\0";
	return (split);
}

