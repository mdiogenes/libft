/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:27:07 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/12 14:26:34 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int charac, unsigned int n)
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
