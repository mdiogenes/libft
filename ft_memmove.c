/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:34:10 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 10:00:50 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	if (!str1 && !str2)
		return (NULL);
	if (str1 < str2)
	{	
		ft_memcpy(str1, str2, n);
	}
	else
	{
		while (n--)
		{
			((char *)str1)[n] = ((char *)str2)[n];
		}
	}
	return (str1);
}
