/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:16:31 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 15:29:35 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	i;

	i = n;
	while (((*str2 != '\0') || (*str1 != '\0')) && (i != 0))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		i--;
	}
	return (0);
}
