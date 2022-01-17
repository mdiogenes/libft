/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:00:39 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 16:19:20 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, unsigned int n)
{
	unsigned int	x;
	char			*st;
	
		x = 0;
	st = (void *) str;
	while (x < n)
	{
		if (st[x] == (char) c)
			return (&st[x]);
		x ++;
	}
	return (0);
}
