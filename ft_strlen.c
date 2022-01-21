/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:51:34 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/19 17:00:03 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	cont = 0;
	while (str[i] != '\0')
	{
		cont ++;
		i++;
	}
	return (cont);
}
