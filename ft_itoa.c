/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:03:56 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 12:47:00 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	//control errors malloc i nomes reservem 2 valors 
	//pq farem recursivament un es el numero i laltre sera lacabat en \0
	str = (char *)malloc(sizeof(char) * 2);
	if (str == 0)
		return (0);
	//cas maxim negatiu no dongi problemes al escriure 
	//el positiu maxi que genera overflow
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	//si ens entra un negatiu posem el signe i tornem a cridar multiplant per -
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		//afegim a la str
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		//convertim a char amb el +o i creem els valor a afegir a la str
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
