/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:10:21 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/14 15:20:04 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sizedst)
{
	size_t			sizesrc;
	unsigned int	x;

	sizesrc = ft_strlen(src);
	x = 0;
	if (sizedst != 0)
	{
		while ((src[x] != '\0') && (x < (sizedst - 1)))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (sizesrc);
}
