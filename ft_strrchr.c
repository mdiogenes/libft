/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:39:30 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 15:54:09 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*trobat;
	int		x;

	x = 0;
	trobat = (char *)str;
	while (trobat[x] != '\0')
	{
		x ++;
	}
	while (x >= 0)
	{
		if (trobat[x] == (char )c)
			return (&trobat[x]);
		x --;
	}
	return (0);
}
