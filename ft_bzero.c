/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:41:25 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/12 14:27:06 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, unsigned int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) str;
	while (n > 0)
	{
		*ptr = 0;
		ptr ++;
		n --;
	}
}