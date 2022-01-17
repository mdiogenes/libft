/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:01:58 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 10:40:04 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	cont = 0;
	while (str[i] != '\0')
	{
		cont = cont + 1;
		i++;
	}
	return (cont);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int sizedstmem)
{
	unsigned int	x;
	unsigned int	sizesrc;
	unsigned int	sizedst;
	char			*srcchar;

	srcchar = (char *)src;
	x = 0;
	sizesrc = ft_strlen(srcchar);
	sizedst = ft_strlen(dst);
	if ((sizedstmem - 1) <= sizesrc)
		return (sizedst + sizedstmem);
	while ((sizesrc + x) < sizedstmem)
	{
		dst[sizedst + x] = src[x];
		x ++;
	}
	dst[sizedst + x] = '\0';
	return (sizesrc + sizedst);
}
