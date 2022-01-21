/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 09:33:21 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/19 10:04:40 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ustr1;
	unsigned char	*ustr2;

	ustr1 = (unsigned char *) str1;
	ustr2 = (unsigned char *) str2;
	i = 0;
	while (i < n)
	{
		if (ustr1[i] != ustr2[i])
			return (ustr1[i] - ustr2[i]);
		i ++;
	}
	return (0);
}
