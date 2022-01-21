/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 09:54:03 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/20 12:11:24 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_len(const char *str)
{
	unsigned int	num;

	num = 0;
	while (*str != '\0')
	{
		str ++;
		num ++;
	}	
	return (num);
}

char	*ft_strnstr(const char *sr, const char *sr2, size_t szst)
{
	size_t	x;
	size_t	i;
	size_t	sizestr2;
	char	*cstr;

	x = 0;
	cstr = (char *) sr;
	sizestr2 = ft_len(sr2);
	if (sizestr2 == 0 || sr == sr2)
		return (cstr);
	while ((cstr[x] != '\0') && (x < szst))
	{
		i = 0;
		while ((cstr[x + i] != '\0') && (sr2[i] != '\0')
			&& (cstr[x + i] == sr2[i]) && (x + i < szst))
			i ++;
		if (i == sizestr2)
			return (cstr + x);
		x ++;
	}
	return (0);
}
