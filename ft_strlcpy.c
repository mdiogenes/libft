/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:10:21 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 10:02:34 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int sizedst)
{
	unsigned int	sizesrc;
	unsigned int	x;

	sizesrc = 0;
	while (*(src + sizesrc) != '\0')
	{
		sizesrc ++;
	}
	x = 0;
	if (sizedst != 0)
	{
		while ((src[x] != '0') && (x < (sizedst - 1)))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (sizesrc);
}
