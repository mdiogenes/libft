/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:32:24 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 11:08:44 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_strings(const char *str, char c)
{
	int	x;
	int	found;

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

static char	*copiastr(const char *str, int start, int finish)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(sizeof(char) * (finish - start + 1));
	if (dst == 0)
		return (0);
	while (start < finish)
		dst[i++] = str[start++];
	dst[i] = '\0';
	return (dst);
}

char	**remem(char const *s, char c)
{
	char	**dst;

	if (!s)
		return (0);
	dst = malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (dst == 0)
		return (0);
	return (dst);
}

char	**omplim(const char *s, char c, char **split)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j] = copiastr(s, index, i);
			j ++;
			index = -1;
		}
		i++;
	}
	split[j] = (char *) '\0';
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = remem(s, c);
	split = omplim(s, c, split);
	return (split);
}
