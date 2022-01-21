/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:06:53 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/20 12:28:00 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	space(int c)
{
	if (c == ' ' || c == '\n' || c == '\f'
		|| c == '\r' || c == '\v' || c == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while (space(*str))
		str++;
	while ((*str == '+' || *str == '-') && str)
	{
		if (*str == '-')
			sign *= -1;
		str ++;
		break ;
	}
	while (ft_isdigit(*str) && str)
	{
		num = (num * 10) + (*str - 48);
		str ++;
	}
	return (num * sign);
}
