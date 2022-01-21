/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:38:02 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/19 11:25:33 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sizedstmem)
{
	size_t	x;
	size_t	y;
	size_t	sizesrc;
	size_t	sizedst;
	char	*s;

	x = 0;
	s = (char *) src;
	sizesrc = ft_strlen(src);
	sizedst = ft_strlen(dst);
	y = sizedst;
	if (sizedstmem == 0)
		return (sizesrc);
	if (sizedst < sizedstmem -1)
	{
		while ((sizedst + x) < (sizedstmem - 1) && s[x] != '\0')
		{
			dst[y++] = s[x++];
		}
		dst[y] = '\0';
	}	
	if (sizedstmem <= sizedst)
		return (sizesrc + sizedstmem);
	return (sizesrc + sizedst);
}
