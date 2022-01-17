/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:48:02 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 15:51:54 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*trobat;

	trobat = (char *)str;
	if (c >= 126)
		c = 255 - c;
	while (*trobat != '\0')
	{
		if (*trobat == c)
			return (trobat);
		trobat ++;
	}
	return (0);
}
