/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:28:45 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 11:09:43 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (s[len])
		len ++;
	str = (char *)malloc(sizeof(const char) * (len + 1));
	if (!str)
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < len)
	{
	str[i] = s[i];
	i ++;
	}
	str[i] = '\0';
	return (str);
}
