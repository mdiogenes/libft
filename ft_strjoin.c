/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:54:23 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 10:44:41 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*dst;
	unsigned int	sizes1;
	unsigned int	sizes2;
	int				lendst;

	if (!s1 || !s2)
		return (0);
	sizes1 = ft_strlen((char *)s1);
	sizes2 = ft_strlen((char *)s2);
	dst = (char *)malloc(sizeof (const char) * (sizes1 + sizes2 + 1));
	if (dst == 0)
		return (0);
	lendst = ft_strlcpy(dst, s1, (sizes1 + 1));
	lendst = ft_strlcat(dst, s2, (sizes1 + sizes2 + 1));
	return (dst);
}
