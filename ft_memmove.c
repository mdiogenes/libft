/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:34:10 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 09:15:47 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *str1, const void *str2, unsigned int n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *) str1;
	ptr2 = (const unsigned char *) str2;
	while ((n > 0) && (ptr1 != &ptr2[0]))
	{
		*ptr1 = *ptr2;
		ptr1 ++;
		ptr2 ++;
		n --;
	}
	return (str1);
}
