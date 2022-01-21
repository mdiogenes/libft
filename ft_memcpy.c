/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:53:53 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 09:52:26 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	if (dst == src)
		return (dst);
	ptr = (unsigned char *) dst;
	ptr2 = (unsigned char *) src;
	while (n > 0)
	{
		*ptr = *ptr2;
		ptr ++;
		ptr2 ++;
		n --;
	}
	return (dst);
}
