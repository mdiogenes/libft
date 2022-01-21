/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:27:07 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/19 10:05:27 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int charac, size_t n)
{	
	unsigned char	*ptr;

	ptr = (unsigned char *) str;
	while (n > 0)
	{
		*ptr = (unsigned char)charac;
		ptr ++;
		n --;
	}
	return (str);
}
