/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:47:11 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 15:55:30 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int charac)
{
	if ((charac >= 97) && (charac <= 122))
			charac = charac - 32;
	return (charac);
}
