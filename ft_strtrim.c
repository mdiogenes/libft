/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:22:48 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 10:40:14 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*dst;
	int		len;
	int		x;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	while (*(s1 + len - 1) > 0 && ft_strchr(set, *(s1 + len - 1)))
		len --;
	x = 0;
	while (*s1 && ft_strchr(set, *s1))
	{
		x ++;
		s1 ++;
	}
	len = len - x + 1;
	if (len < 0)
		len = 0;
	dst = malloc ((sizeof (char)) * (len + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s1, len);
	dst[len] = '\0';
	return (dst);
}
